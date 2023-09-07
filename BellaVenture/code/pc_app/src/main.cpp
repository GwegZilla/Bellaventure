#include "models/GlobalModel.h"
#include "models/MenuPageModel.h"
#include "states/MasterMachine.h"

#include "CharacterStats.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDirIterator>

#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QDirIterator it(":", QDirIterator::Subdirectories);
    while (it.hasNext()) {
        qDebug() << it.next();
    }

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "BellaVenture_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            app.installTranslator(&translator);
            break;
        }
    }

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/appBellaVenture/qml/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    // Create models
    GlobalModel globalModel;
    MenuPageModel menuPageModel;

    // Create logic units
    MasterMachine masterMachine (globalModel, menuPageModel);

    // Set context properties
    QQmlContext* context = engine.rootContext(); //view is the QDeclarativeView
    context->setContextProperty( "_globalModel", &globalModel );
    context->setContextProperty( "_menuPageModel", &menuPageModel );

    // launch everything
    qDebug() << "loading qml engine...";
    engine.load(url);
    qDebug() << "qml engine started";

    masterMachine.start();

    return app.exec();
}

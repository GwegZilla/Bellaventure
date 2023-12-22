#pragma once

#include <QObject>

class PageId : public QObject {
    Q_OBJECT

public:
    // This enum matches order in swipe view in root.qml
    enum Id {
        menuPage,
        creationPage,
        playPage,
        optionsPage
    };

};

class GlobalModel : public QObject {
    Q_OBJECT

    Q_PROPERTY (bool isConsoleVisible READ isConsoleVisible WRITE setConsoleVisible NOTIFY isConsoleVisibleChanged)
    Q_PROPERTY (QString consoleContent READ consoleContent WRITE setConsoleContent NOTIFY consoleContentChanged)
    Q_PROPERTY (PageId::Id currentPageId READ currentPageId WRITE setCurrentPageId NOTIFY currentPageIdChanged)

public:
    bool isConsoleVisible() const;
    void setConsoleVisible(bool newIsConsoleVisible);

    QString consoleContent() const;
    void setConsoleContent(const QString &newConsoleContent);

    PageId::Id currentPageId() const;
    void setCurrentPageId(const PageId::Id &newCurrentPageId);

signals:
    void isConsoleVisibleChanged();

    void consoleContentChanged();

    void currentPageIdChanged();

    void backButtonClicked();

private:
    bool m_isConsoleVisible = true;
    QString m_consoleContent = "lorem \n ipsum \n dolores \n there is an error line X";
    PageId::Id m_currentPageId = PageId::menuPage;
};



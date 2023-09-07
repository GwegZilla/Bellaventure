#pragma once

#include <QObject>

class MenuPageModel : public QObject {

    Q_OBJECT

signals:
     void createButtonClicked();
     void playButtonClicked();
     void optionsButtonClicked();

};

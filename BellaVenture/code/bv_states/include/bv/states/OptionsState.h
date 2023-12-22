#pragma once
#include <QState>

class OptionsState : public QState {


public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

};

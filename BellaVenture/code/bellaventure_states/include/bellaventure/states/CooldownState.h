#pragma once
#include <QState>

class CooldownState : public QState {


public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

};

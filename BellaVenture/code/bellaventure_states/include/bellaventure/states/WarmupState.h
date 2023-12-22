#pragma once
#include <QState>

class WarmupState : public QState {

    Q_OBJECT

public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

signals:
    void warmupDone();

};

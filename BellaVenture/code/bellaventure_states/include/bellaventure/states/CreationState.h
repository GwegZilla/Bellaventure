#pragma once
#include "bellaventure/models/GlobalModel.h"

#include <QState>

class CreationState : public QState {

public :
    CreationState(GlobalModel& globalModel) : m_globalModel(globalModel) {}

    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

private:
    GlobalModel& m_globalModel;

};

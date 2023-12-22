#pragma once
#include <QState>

#include "bellaventure/models/GlobalModel.h"
#include "bellaventure/models/MenuPageModel.h"

class MenuState : public QState {


public :

    MenuState(GlobalModel& globalModel, MenuPageModel& menuPageModel) : m_globalModel(globalModel), m_menuPageModel(menuPageModel) {}

    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

private:
    GlobalModel& m_globalModel;
    MenuPageModel& m_menuPageModel;

};

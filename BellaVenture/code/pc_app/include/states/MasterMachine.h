#include "CreationState.h"
#include "CooldownState.h"
#include "MenuState.h"
#include "OptionsState.h"
#include "PlayState.h"
#include "WarmupState.h"

#include "models/GlobalModel.h"
#include "models/MenuPageModel.h"

#include "StrongString.h"

#include <QStateMachine>

class MasterMachine {


public:
    MasterMachine(GlobalModel& globalModel, MenuPageModel& menuPageModel);

    void start();

private:
    QStateMachine m_rootMachine;

    // Specific states of the application
    CreationState m_creationState;
    CooldownState m_cooldownState;
    MenuState m_menuState;
    OptionsState m_optionsState;
    PlayState m_playState;
    WarmupState m_warmupState;

    // Models of the different pages of the application
    MenuPageModel& m_menuPageModel;
};

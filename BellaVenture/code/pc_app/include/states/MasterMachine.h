#include "CreationState.h"
#include "CooldownState.h"
#include "MenuState.h"
#include "OptionsState.h"
#include "PlayState.h"
#include "WarmupState.h"

#include <QStateMachine>

class MasterMachine {
public:
private:
    QStateMachine m_rootMachine;

    // Specific states of the application
    CreationState m_stateCreation;
    CooldownState m_cooldownState;
    MenuState m_menuState;
    OptionsState m_optionsState;
    PlayState m_playState;
    WarmupState m_warmupState;
};

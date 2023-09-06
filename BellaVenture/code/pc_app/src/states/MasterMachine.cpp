#include "states/MasterMachine.h"

#include <QDebug>

MasterMachine::MasterMachine(GlobalModel& globalModel, MenuPageModel& menuPageModel) :
   m_creationState(globalModel), m_menuState(globalModel, menuPageModel), m_menuPageModel(menuPageModel)
{
    qDebug() << "setup the master machine states...";

    m_rootMachine.addState(&m_creationState);
    m_rootMachine.addState(&m_cooldownState);
    m_rootMachine.addState(&m_menuState);
    m_rootMachine.addState(&m_optionsState);
    m_rootMachine.addState(&m_playState);
    m_rootMachine.addState(&m_warmupState);


    qDebug() << "setup the master machine transitions...";

    qDebug() << "setup warmup state transitions...";
    m_warmupState.addTransition(&m_warmupState, WarmupState::warmupDone, &m_menuState);

    qDebug() << "setup menu state transitions...";
    m_menuState.addTransition(&m_menuPageModel, MenuPageModel::createButtonClicked, &m_creationState);

    qDebug() << "setup creation state transitions...";
    m_creationState.addTransition(&globalModel, GlobalModel::backButtonClicked, &m_menuState);

    qDebug() << "setup the master machine initial state...";
    m_rootMachine.setInitialState(&m_warmupState);

}

void MasterMachine::start()
{
    qDebug() << "master machine starts...";
    m_rootMachine.start();
    qDebug() << "master machine started";
}

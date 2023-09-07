#include "states/MenuState.h"

#include <QDebug>

void MenuState::onEntry(QEvent *event)
{
    qDebug() << "enter menu state";
    m_globalModel.setCurrentPageId(PageId::menuPage);
}

void MenuState::onExit(QEvent *event)
{
    qDebug() << "exit menu state";
}

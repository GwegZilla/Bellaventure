#include "states/CreationState.h"

#include <QDebug>

void CreationState::onEntry(QEvent *event)
{
    qDebug() << "enter creation state";
    m_globalModel.setCurrentPageId(PageId::creationPage);
}

void CreationState::onExit(QEvent *event)
{
    qDebug() << "enter creation state";
}

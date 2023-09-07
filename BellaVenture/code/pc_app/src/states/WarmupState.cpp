#include "states/WarmupState.h"

#include <QDebug>

void WarmupState::onEntry(QEvent *event)
{
    qDebug() << "enter warmup state";
    emit warmupDone();
}

void WarmupState::onExit(QEvent *event)
{
    qDebug() << "quit Warmup state";
}

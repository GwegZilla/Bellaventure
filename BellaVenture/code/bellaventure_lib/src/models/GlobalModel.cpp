#include "bellaventure/models//GlobalModel.h"

bool GlobalModel::isConsoleVisible() const
{
    return m_isConsoleVisible;
}

void GlobalModel::setConsoleVisible(bool newIsConsoleVisible)
{
    if (m_isConsoleVisible == newIsConsoleVisible)
        return;
    m_isConsoleVisible = newIsConsoleVisible;
    emit isConsoleVisibleChanged();
}

QString GlobalModel::consoleContent() const
{
    return m_consoleContent;
}

void GlobalModel::setConsoleContent(const QString &newConsoleContent)
{
    if (m_consoleContent == newConsoleContent)
        return;
    m_consoleContent = newConsoleContent;
    emit consoleContentChanged();
}

PageId::Id GlobalModel::currentPageId() const
{
    return m_currentPageId;
}

void GlobalModel::setCurrentPageId(const PageId::Id &newCurrentPageId)
{
    if (m_currentPageId == newCurrentPageId)
        return;
    m_currentPageId = newCurrentPageId;
    emit currentPageIdChanged();
}

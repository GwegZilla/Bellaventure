#include "Level.h"

#include <algorithm>

namespace BellaVenture {

    static constexpr int s_minimumLevel = 0;
    static constexpr int s_maximumLevel = 5;

    int Level::toInt() const
    {
        return m_value;
    }

    void Level::up()
    {
        set(++m_value);
    }

    void Level::down()
    {
        set(--m_value);
    }

    void Level::set(int value)
    {
        m_value = std::clamp(value, s_minimumLevel, s_maximumLevel);
    }

    bool Level::operator <(const Level &rvalue) const
    {
        return m_value < rvalue.m_value;
    }

    bool Level::operator ==(const Level &rvalue) const
    {
        return m_value == rvalue.m_value;
    }

    bool Level::operator =(const Level &rvalue)
    {
        return m_value = rvalue.m_value;
    }

}

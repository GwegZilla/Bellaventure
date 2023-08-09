#pragma once

#include "Level.h"
#include "Gift.h"

#include <QString>
#include <QMap>

namespace BellaVenture {

    struct CharacterStats {

        Level m_sturdiness;
        Level m_swiftness;
        Level m_mind;
        Level m_soul;

        Gift m_jack;
        Gift m_knight;
        Gift m_queen;
        Gift m_king;
        Gift m_ace;

        QMap<QString, Level> m_skills;
    };
}




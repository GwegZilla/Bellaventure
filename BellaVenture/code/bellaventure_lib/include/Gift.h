#pragma once

#include "Level.h"
#include "StrongString.h"

#include <QString>
#include <QMap>

namespace BellaVenture {

    using GiftName = StrongString<struct GiftNameTag>;
    using GiftDescription = StrongString<struct GiftDescriptionTag>;

    // From lesser to greater gifts
    enum GiftRank {
        Jack,
        Knight,
        Queen,
        King,
        Ace
    };

    class Gift {
        public:
            Gift();
            Gift(GiftRank, GiftName, GiftDescription);

            bool operator < (const Gift& rvalue) const;
            bool operator == (const Gift& rvalue) const;

            void operator = (const Gift& rvalue);

        private:
            GiftRank m_rank;

            GiftName m_name;
            GiftDescription m_description;
    };
}




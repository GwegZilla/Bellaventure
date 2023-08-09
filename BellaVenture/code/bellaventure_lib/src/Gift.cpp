#include "Gift.h"

namespace BellaVenture {

    static const QMap<GiftRank, int> s_giftPower = {
        {GiftRank::Jack, 0},
        {GiftRank::Knight, 1},
        {GiftRank::Queen, 2},
        {GiftRank::King, 3},
        {GiftRank::Ace, 4}
    };

    static GiftName s_defaultGiftName = {"Gift"};
    static GiftDescription s_defaultGiftDescription = {"Add 1 POW to next roll."};

    BellaVenture::Gift::Gift()
    {}

    BellaVenture::Gift::Gift(GiftRank giftRank, GiftName giftName, GiftDescription giftDescription) {}

    bool BellaVenture::Gift::operator <(const Gift &rvalue) const
    {
        return s_giftPower[m_rank] < s_giftPower[rvalue.m_rank];
    }

    bool Gift::operator ==(const Gift &rvalue) const
    {
        return m_rank == rvalue.m_rank
                && m_name == rvalue.m_name
                && m_description == rvalue.m_description;
    }

    void Gift::operator =(const Gift &rvalue)
    {
        m_rank = rvalue.m_rank;
        m_name = rvalue.m_name;
        m_description = rvalue.m_description;
    }

}

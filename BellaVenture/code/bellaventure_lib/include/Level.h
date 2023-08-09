#pragma once

namespace BellaVenture {

    class Level {

    public:
        int toInt() const;

        void up();
        void down();

        void set(int);
        void set(const Level&);

        bool operator < (const Level& rvalue) const;
        bool operator == (const Level& rvalue) const;

        bool operator = (const Level& rvalue);

    private:
        int m_value;
    };

}

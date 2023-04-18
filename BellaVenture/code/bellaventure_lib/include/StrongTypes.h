namespace BellaVenture {

    enum class CharacteristicType {
        Sturdiness,
        Swiftness,
        Mind,
        Soul
    };

    class Level {

    public:
        int toInt() const;

        void increment();
        void decrement();

        void set(int);
        void set(const Level&);

        void operator < (const Level& rvalue) const;
        void operator == (const Level& rvalue) const;

        void operator = (const Level& rvalue);


    private:
        int value;

        void clamp();
    };

}



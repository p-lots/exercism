#include <string>

namespace date_independent {
    class clock {
    public:
        static clock at(int h, int m = 0);
        operator std::string() const;
        clock& plus(int);
        clock& minus(int);
        bool operator==(const clock right) const;
        bool operator!=(const clock right) const;
        
    private:
        clock(int h) : hours(h) {};
        clock(int h, int m) : hours(h), minutes(m) {};
        int hours, minutes;
    };
}
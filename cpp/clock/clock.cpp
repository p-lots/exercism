#include <iomanip>
#include <sstream>
#include <string>

#include "clock.h"

namespace date_independent {
    clock clock::at(int h, int m)
    {
        return clock(h, m);
    }
    
    clock::operator std::string() const
    {
        std::stringstream ret;
        ret << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2) << std::setfill('0') << minutes;
        return ret.str();
    }
    
    clock& clock::plus(int m)
    {
        if (m > 60) {
            hours += m / 60;
            minutes += m % 60;
        }
        
        else if (((minutes + m) / 60 + hours) > 23) {
            hours = (hours + (minutes + m) / 60) % 24;
            minutes += m;
            minutes = minutes % 60;
        }
        
        else {
            minutes += m;
        }
        
        return *this;
    }
    
    clock& clock::minus(int m)
    {
        if (minutes - m < 0) {
            hours = hours - ((minutes + m) / 60 + 1);
            
            if (hours < 0) {
                while (hours < 0) {
                    hours += 24;
                }
            }
            
            minutes -= m;
            
            if (minutes < 0) {
                while (minutes < 0) {
                    minutes += 60;
                }
            }
        }
        
        else {
            minutes -= m;
        }
        
        return *this;
    }
    
    bool clock::operator==(const clock right) const
    {
        return hours == right.hours && minutes == right.minutes;
    }
    
    bool clock::operator!=(const clock right) const
    {
        return !(*this == right);
    }
}
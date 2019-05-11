#include <string>

#include "phone_number.h"

std::string phone_number::number() const
{
    if (num.length() == 11) {
        if (num[0] == '1') {
            return make_num(num.substr(1));
        }
        
        else {
            return std::string(10, '0');
        }
    }
    
    else if (num.length() == 9) {
        return std::string(10, '0');
    }
    
    return make_num(num);
}

std::string phone_number::make_num(std::string n) const
{
    std::string ret;
    
    for (auto& c : n) {
        if (isnumber(c) && (!(ispunct(c)) && !(isspace(c)))) {
            ret.push_back(c);
        }
    }
    
    return ret;
}

std::string phone_number::area_code() const
{
    if (num.length() == 11) {
        return num.substr(1, 3);
    }
    
    return num.substr(0, 3);
}

phone_number::operator std::string() const
{
    return "(" + area_code() + ") " + num.substr(3, 3) + "-" + num.substr(6, 4);
}
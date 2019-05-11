#include <cmath>
#include <cstring>
#include <string>

#include "binary.h"

namespace binary {
    int convert(std::string n)
    {
        if (!isBinaryNum(n)) {
            return 0;
        }
        
        int ret = 0, power = n.length() - 1;
        
        for (auto c : n) {
            ret += ((1 << power--) * (c == '1' ? 1 : 0));
        }
        
        return ret;
    }
    
    bool isBinaryNum(std::string n)
    {
        for (auto c : n) {
            if (!isnumber(c)) {
                return false;
            }
        }
        
        return true;
    }
}
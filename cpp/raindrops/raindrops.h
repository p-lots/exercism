#include <string>

namespace raindrops {
    std::string convert(int n)
    {
        std::string ret = "";
        bool ingAdded = false, angAdded = false, ongAdded = false;
        
        if (n % 3 == 0) {
            ret += "Pling";
            ingAdded = true;
        }
        
        if (n % 5 == 0) {
            ret += "Plang";
            angAdded = true;
        }
        
        if (n % 7 == 0) {
            ret += "Plong";
            ongAdded = true;
        }
        
        if (!ingAdded && !angAdded && !ongAdded) {
            ret = std::to_string(n);
        }
        
        return ret;
    }
}
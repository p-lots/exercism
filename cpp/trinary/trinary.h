#include <cctype>
#include <cmath>
#include <cstdlib>
#include <string>

namespace trinary {
    int to_decimal(std::string n)
    {
        int ret = 0;
        unsigned power = n.length() - 1;
        
        for (std::string::size_type i = 0; i < n.length(); ++i) {
            if (!isdigit(n[i])) {
                return 0;
            }
            
            ret += ((n[i] - '0') * pow(3, power--));
        }
        
        return ret;
    }
}
#include <cmath>

namespace grains {
    unsigned long long square(int n)
    {
        return 1ULL << (n - 1);
    }
    
    unsigned long long total()
    {
        unsigned long long ret = 0;
        
        for (int i = 0; i < 64; ++i) {
            ret += square(i + 1);
        }
        
        return ret;
    }
}
#include <vector>

#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> of(int n)
    {
        if (n < 2) {
            return {};
        }
        
        std::vector<int> ret;
        
        int divisor = 2, dividend = n;
        
        while (dividend != 1) {
            if (dividend % divisor == 0) {
                ret.push_back(divisor);
                dividend /= divisor;
            }
            
            else {
                do {
                    ++divisor;
                } while (!isPrime(divisor));
            }
        }
        
        return ret;
    }
    
    bool isPrime(int n)
    {
        for (int i = 2; i < n; ++i) {
            if (n % i == 0 && n != i) {
                return false;
            }
        }
        
        return true;
    }
}
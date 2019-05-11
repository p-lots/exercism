#include <stdexcept>

#include "nth_prime.h"

namespace prime {
    unsigned nth(unsigned n)
    {
        if (n == 0) {
            throw std::domain_error("");
        }
        
        unsigned ret;
        
        int count = 0, i = 2;
        
        while (count < n) {
            if (is_prime(i)) {
                ret = i;
                count++;
            }
            i++;
        }
        
        return ret;
    }
    
    bool is_prime(unsigned n) {
        for (unsigned i = 2; i < n; ++i) {
            if (n % i == 0 && i != n) {
                return false;
            }
        }
        
        return true;
    }
    
    std::vector<int> sieve(std::size_t n)
    {
        std::vector<int> result;
        
        std::vector<char> sieve(n, false);
        
        for (std::size_t p = 2, p2 = 2*2; p2 < n; ++p, p2 = p*p) {
            
            if (sieve[p])
                continue;
            
            for (std::size_t i = p2; i < n; i += p) {
                
                sieve[i] = true;
            }
        }
        
        for (std::size_t i = 2; i < n; ++i)
            if (!sieve[i])
                result.push_back(i);
        
        return result;
    }
    
    unsigned generate(unsigned n)
    {
        unsigned count = 0, i = 2;
        
        while (count < n) {
            //
        }
        
        return i;
    }
}
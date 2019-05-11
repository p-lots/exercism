#include <algorithm>
#include <list>
#include <numeric>
#include <vector>

#include "sieve.h"

namespace sieve {
    std::vector<int> primes(int max)
    {
        std::vector<int> ret;
        
        std::list<int> primes_list(max - 1);
        
        std::iota(primes_list.begin(), primes_list.end(), 2);
        
        while (!primes_list.empty()) {
            int temp = primes_list.front();
            
            primes_list.pop_front();
            
            ret.push_back(temp);
            
            primes_list.remove_if([temp](int n) { return n % temp == 0; });
            
        }

        return ret;
    }
}
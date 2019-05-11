#include <numeric>
#include <set>
#include <vector>

#include "sum_of_multiples.h"

namespace sum_of_multiples {
    
    int to(std::vector<int> mult, int n)
    {
        if (mult.empty()) {
            return 0;
        }
        
        std::set<int> results;
        
        for (auto &it : mult) {
            for (int i = 1; i < n; ++i) {
                if (i % it == 0 && results.count(i) == 0) {
                    results.insert(i);
                }
            }
        }
        
        return std::accumulate(results.begin(), results.end(), 0);
    }
}
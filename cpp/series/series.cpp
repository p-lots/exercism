#include <stdexcept>

#include "series.h"

namespace series {
    int_vector digits(std::string n)
    {
        int_vector ret;
        
        for (std::string::size_type i = 0; i < n.length(); ++i) {
            ret.push_back(n[i] - '0');
        }
        
        return ret;
    }
    
    vector_of_int_vectors slice(std::string n, unsigned slice_size)
    {
        if (slice_size > n.length()) {
            throw std::domain_error("Error: slice size must be less than size of input string.");
        }
        
        vector_of_int_vectors ret;
        
        int_vector temp, digits_vec = digits(n);
        
        for (auto it = digits_vec.begin(); it + (slice_size - 1) != digits_vec.end(); ++it) {
            temp = int_vector(it, it + slice_size);
            ret.push_back(temp);
        }
        
        return ret;
    }
}
#include <algorithm>
#include <stdexcept>
#include <vector>

namespace triangle {
    typedef enum {
        equilateral,
        isosceles,
        scalene
    } triangle;
    
    triangle kind(float a, float b, float c)
    {
        if ((a <= 0 || b <= 0) || c <= 0) {
            throw std::domain_error("Error: Length of each side must be greater than 0");
        }
        
        std::vector<float> tri { a, b, c };
        sort(tri.begin(), tri.end());
        
        a = tri[0];
        b = tri[1];
        c = tri[2];
        
        if (a + b < c) {
            throw std::domain_error("Error: violates triangle inequality law");
        }
        
        if ((a != b && b == c) ||
            (b != c && a == c)) {
            return isosceles;
        }
        
        else if ((a != b && b != c) && a != c) {
            return scalene;
        }
        
        return equilateral;
    }
}
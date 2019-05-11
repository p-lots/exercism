#include <string>
#include <vector>

typedef std::vector<int> int_vector;

typedef std::vector< std::vector<int> > vector_of_int_vectors;

namespace series {
    int_vector digits(std::string);
    vector_of_int_vectors slice(std::string, unsigned);
}
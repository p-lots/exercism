#include <cmath>
#include <cstring>
#include <string>
#include <vector>

#include "crypto_square.h"

namespace crypto_square {
    std::string cipher::normalize_plain_text()
    {
        std::string ret = "";
        
        for (auto c : plaintext) {
            if (isalnum(c)) {
                ret.push_back(isalpha(c) ? tolower(c) : c);
            }
        }
        
        return ret;
    }
    
    unsigned cipher::size()
    {
        unsigned c = 1;
        
        std::string norm = normalize_plain_text();
        
        while (c*c < norm.length()) {
            ++c;
        }
        
        return c;
    }
    
    std::vector<std::string> cipher::plain_text_segments()
    {
        std::vector<std::string> ret;
        
        std::string norm = normalize_plain_text();
        
        for (unsigned i = 0; i < norm.length(); i += size()) {
            ret.push_back(norm.substr(i, size()));
        }
        
        return ret;
    }
    
    std::string cipher::cipher_text()
    {
        std::string ret = "";
        
        std::vector<std::string> segs = plain_text_segments();
        unsigned segment_size = size();
        unsigned num_segs = segs.size();
        
        for (std::string::size_type i = 0; i < segment_size; ++i) {
            for (std::vector<std::string>::size_type j = 0; j < num_segs; ++j) {
                if (i < segs[j].length()) {
                    ret.push_back(segs[j][i]);
                }
            }
        }
        
        return ret;
    }
    
    std::string cipher::normalized_cipher_text()
    {
        std::string ret = "", c_text = cipher_text();
        unsigned rows = size();
        ret += c_text.substr(0, rows);
        
        for (auto i = rows; i < c_text.size(); i += rows) {
            ret += ' ' + c_text.substr(i, rows);
        }
        
        return ret;
    }

}
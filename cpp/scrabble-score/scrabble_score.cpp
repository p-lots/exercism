#include <cstring>
#include <map>
#include <string>

#include "scrabble_score.h"

namespace scrabble_score {
    
    static std::map<char, int> scoreKey = {
        {'a', 1}, {'b', 3}, {'c', 3}, {'d', 2},
        {'e', 1}, {'f', 4}, {'g', 2}, {'h', 4},
        {'i', 1}, {'j', 8}, {'k', 5}, {'l', 1},
        {'m', 3}, {'n', 1}, {'o', 1}, {'p', 3},
        {'q', 10}, {'r', 1}, {'s', 1}, {'t', 1},
        {'u', 1}, {'v', 4}, {'w', 4}, {'x', 8},
        {'y', 4}, {'z', 10}};
    
    int score(std::string word)
    {
        if (word.empty()) {
            return 0;
        }
        
        word = makelower(word);
        
        int score = 0;
        
        for (auto letter : word) {
            score += scoreKey[letter];
        }
        
        return score;
    }
    
    std::string makelower(std::string word)
    {
        std::string ret;
        
        for (auto letter : word) {
            ret.push_back(tolower(letter));
        }
        
        return ret;
    }
}
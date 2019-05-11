#include <stdexcept>

#include "beer_song.h"

namespace beer {
    std::string verse(unsigned v)
    {
        std::string num_bottles = std::to_string(v);
        std::string bottle_or_bottles = "", taken_down_word = "";
        std::string beers_left = std::to_string(v - 1);
        
        switch (v) {
            case 1:
                bottle_or_bottles = "bottle";
                taken_down_word = "it";
                beers_left = "no more";
                break;
            case 0:
            {
                return "No more bottles of beer on the wall, "
                "no more bottles of beer.\n"
                "Go to the store and buy some more, "
                "99 bottles of beer on the wall.\n";
                
                break;
            }
            default:
                bottle_or_bottles = "bottles";
                taken_down_word = "one";
                break;
        }
        
        std::string num_plus_bottles = num_bottles + " " + bottle_or_bottles;
        
        return num_plus_bottles + " of beer on the wall, " + \
        num_plus_bottles + " of beer.\n"
        "Take " + taken_down_word + " down and pass it around, " + \
        beers_left + " bottle" + (v - 1 == 1 ? "" : "s") + " of beer on the wall.\n";
    }
    
    std::string sing(unsigned start, unsigned end)
    {
        std::string ret = verse(start);
        
        unsigned i = start;
        
        while (i != end) {
            ret += '\n' + verse(--i);
        }
        
        return ret;
    }
}
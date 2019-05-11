#include <cmath>
#include <vector>
#include <string>

#include "say.h"

static std::vector<std::string> firstNums {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve"
};

static std::vector<std::string> tens {
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety"
};

static std::vector<std::string> powersOfTen {
    "",
    "thousand",
    "million",
    "billion",
    "trillion"
};

namespace say {
    std::string in_english(signed long long n) {
        if (n < 0 || n > pow(10, 12) - 1) {
            throw std::domain_error("");
        }
        
        else if (n == 0) {
            return firstNums[n];
        }
        
        std::vector<int> groups;
        
        std::string ret = "", numberString = std::to_string(n);
        
        for (int i = numberString.length(); i > 0; i -= 3) {
            if (i - 3 > 0) {
                groups.insert(groups.begin(), stoi(numberString.substr(i - 3, 3)));
            }
            
            else {
                groups.insert(groups.begin(), stoi(numberString.substr(0, i)));
            }
        }
        
        unsigned powTenIndex = groups.size() - 1;
        
        for (auto it = groups.begin(); it != groups.end(); ++it) {
            if (*it > 0) {
                ret += helper(*it);
            }
            
            if (powTenIndex > 0 && *it != 0) {
                ret += " " + powersOfTen[powTenIndex];
            }
            
            powTenIndex--;
            
            if (*(it + 1) != 0 && (it != groups.end() - 1 && ret.back() != ' ')) {
                ret += " ";
            }
        }
        
        return ret;
    }
    
    std::string helper(int n)
    {
        std::string ret = "";
        
        while (n > 0) {
            if (n > 99 && n != 0) {
                int hundredIndex = n / 100;
                
                ret += firstNums[hundredIndex] + " hundred";
                
                if (n % 100 > 0) {
                    ret += ' ';
                }
                
                n = n % 100;
            }
            
            if (n >= 20 && n != 0) {
                int tensIndex = n / 10 - 2, onesPlace = n % 10;
                
                if (onesPlace != 0) {
                    ret += tens[tensIndex] + "-" + firstNums[onesPlace];
                }
                
                else {
                    ret += tens[tensIndex];
                }
                
                n /= 100;
            }
            
            if ((n >= 13 && n < 20) && n != 0) {
                ret += firstNums[n - 10] + "teen";
                
                n /= 20;
            }
            
            if (n < 13 && n != 0) {
                ret += firstNums[n];
                
                n /= 13;
            }
        }
        
        return ret;
    }
}
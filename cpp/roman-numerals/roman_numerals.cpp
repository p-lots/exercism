#include <string>

#include "roman_numerals.h"

namespace roman {
    std::string convert(int number)
    {
        std::string ret = "";
        
        while (number > 0) {
            if (number >= 1000) {
                for (int i = 0; i < number; i += 1000) {
                    ret += "M";
                    number -= 1000;
                }
            }
            
            if (number >= 900 && number <= 999) {
                ret += "CM";
                number -= 900;
            }
            
            if (number >= 500 && number <= 899) {
                ret += "D";
                number -= 500;
            }
            
            if (number >= 400 && number <= 499) {
                ret += "CD";
                number -= 400;
            }
            
            if (number >= 100 && number <= 399) {
                for (int i = 0; i < number; i += 100) {
                    ret += "C";
                    number -= 100;
                }
            }
            
            if (number >= 90 && number <= 99) {
                ret += "XC";
                number -= 90;
            }
            
            if (number >= 50 && number <= 89) {
                ret += "L";
                number -= 50;
            }
            
            if (number >= 40 && number <= 49) {
                ret += "XL";
                number -= 40;
            }
            
            if (number >= 10 && number < 40) {
                for (int i = 0; i < number; i += 10) {
                    ret += "X";
                    number -= 10;
                }
            }
            
            if (number == 9) {
                ret += "IX";
                number -= 9;
            }
            
            if (number >= 5 && number <= 8) {
                ret += "V";
                number -= 5;
            }
            
            if (number == 4) {
                ret += "IV";
                number -= 4;
            }
            
            if (number < 4) {
                for (int i = 0; i < number; ++i) {
                    ret += "I";
                    number--;
                }
            }
        }
        
        return ret;
    }
}
#include <string>

class phone_number {
public:
    phone_number(std::string n) : num(n) { };
    std::string number() const;
    std::string area_code() const;
    operator std::string() const;

private:
    std::string num;
    std::string make_num(std::string) const;

    
};
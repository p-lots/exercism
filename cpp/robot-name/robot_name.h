#include <fstream>
#include <string>

namespace robot_name {
    
    class robot {
    public:
        robot();
        std::string name() const { return robotsName; }
        void reset();
    private:
        std::string robotsName;
        
        std::string generateName();

    };
    
}
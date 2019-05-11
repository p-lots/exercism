#include <algorithm>
#include <map>
#include <string>
#include <vector>

namespace grade_school {

	class school {
		std::map<int, std::vector<std::string> > school_roster;

	public:
		std::map<int, std::vector<std::string> > roster();
        void add(std::string, int);
        std::vector<std::string> grade(int);

	};

	bool roster_sort(std::string, std::string);

}
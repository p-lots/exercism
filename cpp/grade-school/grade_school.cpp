#include <algorithm>
#include <map>
#include <string>
#include <vector>

#include "grade_school.h"

namespace grade_school {

	std::map<int, std::vector<std::string> > school::roster()
	{
		return school_roster;
	}
    
    void school::add(std::string name, int grade)
    {
        school_roster[grade].push_back(name);
        sort(school_roster[grade].begin(), school_roster[grade].end(), roster_sort);
    }
    
    std::vector<std::string> school::grade(int grade)
    {
        return school_roster[grade];
    }

    bool roster_sort(std::string a, std::string b)
    {
    	return (a.front() < b.front());
    }

}
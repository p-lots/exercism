#include <fstream>
#include <random>
#include <string>

#include "robot_name.h"

namespace robot_name {
    
    robot::robot()
    {
        robotsName = generateName();
        std::fstream nameHistoryFile("nameHistory.txt", std::fstream::out | std::fstream::app);
        nameHistoryFile << robotsName << '\n';
        nameHistoryFile.close();
    }
    
    std::string robot::generateName()
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<short> charDist(65, 90);
        std::uniform_int_distribution<int> numDist(0, 999);
        
        std::string name = "";
        
        for (int i = 0; i < 2; ++i) {
            name.push_back(static_cast<char>(charDist(mt)));
        }
        
        int numDistResult = numDist(mt);
        
        std::string numPrefix = "";
        
        if (numDistResult < 100) {
            if (numDistResult < 10) {
                numPrefix = "00";
            }
            
            else {
                numPrefix = "0";
            }
        }
        
        name = name + numPrefix + std::to_string(numDistResult);
        
        return name;
    }
    
    void robot::reset()
    {
        std::fstream nameHistoryFile("nameHistory.txt", std::fstream::in | std::fstream::out | std::fstream::app);
        
        std::string tempNewName = generateName(), nameFromHistory = "";
        
        int numOfLines = 0;
        
        while(nameHistoryFile >> nameFromHistory)
        {
            numOfLines++;
        }
        
        nameHistoryFile.clear();
        nameHistoryFile.seekg(0, std::ios::beg);
        
        for(int i = 0; i < numOfLines; i++)
        {
            nameHistoryFile >> nameFromHistory;
            
            if(nameFromHistory == tempNewName) {
                nameHistoryFile.clear();
                nameHistoryFile.seekg(0, std::ios::beg);
                i = 0;
                tempNewName = generateName();
            }
        }
        
        nameHistoryFile << tempNewName << '\n';
        
        robotsName = tempNewName;
        
        nameHistoryFile.close();
    }
    
}

#include <string>
#include <map>

namespace transcription {
    static std::map<char, char> translationMap {
        { 'G', 'C' },
        { 'C', 'G' },
        { 'T', 'A' },
        { 'A', 'U' }
    };
    
    char to_rna(char nucleotide)
    {
        return translationMap[nucleotide];
    }
    
    std::string to_rna(std::string sequence)
    {
        std::string ret = "";
        
        for (auto c : sequence) {
            ret.push_back(translationMap[c]);
        }
        
        return ret;
    }
}
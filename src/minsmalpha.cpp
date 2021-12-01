#include "minsmalpha.hpp"
#include "smorse.hpp"

std::map<std::string, std::vector<std::string>> minsmalpha::map_decodings(std::vector<std::string> permutations)
{
    std::map<std::string, std::vector<std::string>> results;
    for (std::vector<std::string>::iterator pi = permutations.begin(); pi != permutations.end(); pi++)
    {
        std::string perm = *pi.base();
        std::string code_sequence = smorse::smorse(perm);
        results[code_sequence].push_back(perm);
    }
    return results;
}

std::pair<std::string, std::vector<std::string>> minsmalpha::min_decoding(std::map<std::string, std::vector<std::string>> decodings)
{
    std::pair<std::string, std::vector<std::string>> min;
    std::map<std::string, std::vector<std::string>>::iterator di = decodings.begin();
    min.first = di->first;
    min.second = di->second;
    for (; di != decodings.end(); di++)
    {
        if (di->second.size() < min.second.size())
        {
            min.first = di->first;
            min.second = di->second;
        }
    }
    return min;
}

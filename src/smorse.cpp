#include "smorse.hpp"
#include "coding.hpp"

std::string smorse::smorse(std::string in)
{
    std::string result;
    for (size_t s = 0ul; s < in.size(); s++)
    {
        result += smorse::coding.at(in[s]);
    }
    return result;
}

std::map<std::string, std::string> smorse::map_smorse(std::vector<std::string> words)
{
    std::map<std::string, std::string> cw_map;
    for (std::vector<std::string>::iterator wi = words.begin(); wi != words.end(); wi++)
    {
        std::string w(wi->data());
        if (cw_map.count(w) == 0ul)
        {
            cw_map[w] = smorse::smorse(w);
        }
    }
    return cw_map;
}

std::map<std::string, std::size_t> smorse::map_smorse_code_occurences(std::map<std::string, std::string> word_code_map)
{
    std::map<std::string, std::size_t> oc_map;
    for (std::map<std::string, std::string>::iterator i = word_code_map.begin(); i != word_code_map.end(); i++)
    {
        if (oc_map.count(i->second) == 0UL)
        {
            oc_map[i->second] = 1UL;
        }
        else
        {
            oc_map[i->second]++;
        }
    }
    return oc_map;
}

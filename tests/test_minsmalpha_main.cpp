#include "alpha.hpp"
#include "minsmalpha.hpp"
#include "smalpha.hpp"
#include <iostream>

int main()
{
    int result = 0;
    std::vector<std::string> alpha_perms = alpha::alpha();
    std::map<std::string, std::vector<std::string>> decodings_map = minsmalpha::map_decodings(alpha_perms);
    std::map<std::string, std::vector<std::string>> check_map;
    for (std::map<std::string, std::vector<std::string>>::iterator dmi = decodings_map.begin(); dmi != decodings_map.end(); dmi++)
    {
        check_map[dmi->first] = smalpha::smalpha(dmi->first, dmi->second.size() + 1UL);
        if (check_map[dmi->first].size() > dmi->second.size())
        {
            result--;
        }
    }
    std::pair<std::string, std::vector<std::string>> min_decoding = minsmalpha::min_decoding(decodings_map);
    if (result == 0)
    {
        std::cout << min_decoding.first << " " << min_decoding.second.size();
        for (std::vector<std::string>::iterator d = min_decoding.second.begin(); d != min_decoding.second.end(); d++)
        {
            std::cout << " " << *d.base();
        }
        std::cout << std::endl;
    }
    return result;
}

#include "test_alpha.hpp"
#include "alpha.hpp"
#include <map>

int test_alpha::test_alpha()
{
    int result = 0;
    std::vector<std::string> perms = alpha::alpha();
    std::map<std::string, std::size_t> perm_map;
    for (std::vector<std::string>::iterator pi = perms.begin(); pi != perms.end(); pi++)
    {
        std::string p = *pi.base();
        if (perm_map.count(p) == 0)
        {
            perm_map[p] = 1UL;
        }
        else
        {
            perm_map[p]++;
            result--;
        }
    }
    return result;
}

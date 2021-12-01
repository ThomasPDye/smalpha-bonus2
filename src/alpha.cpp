#include "alpha.hpp"

bool possible_next(std::string permutation, char const c)
{
    return (permutation.find(c) == std::string::npos);
}

void run(std::string current_permutation, std::string remaining_charset, std::vector<std::string> *results)
{
    if (remaining_charset.size() > 0UL)
    {
        for (std::size_t ci = 0UL; ci < remaining_charset.size(); ci++)
        {
            if (possible_next(current_permutation, remaining_charset[ci]))
            {
                std::string next_permutation = current_permutation + remaining_charset[ci];
                std::string next_charset = remaining_charset;
                next_charset.erase(ci, 1UL);
                run(next_permutation, next_charset, results);
            }
        }
    }
    else
    {
        results->push_back(current_permutation);
    }
    return;
}

std::vector<std::string> alpha::alpha()
{
    std::vector<std::string> permutations;
    run("", "abcdefghijklmnopqrstuvwxyz", &permutations);
    return permutations;
}

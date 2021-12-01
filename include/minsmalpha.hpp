#pragma once
#include <string>
#include <vector>
#include <map>

namespace minsmalpha
{
    std::map<std::string, std::vector<std::string>> map_decodings(std::vector<std::string> permutations);
    std::pair<std::string, std::vector<std::string>> min_decoding(std::map<std::string, std::vector<std::string>> decodings);
} // namespace minsmalpha

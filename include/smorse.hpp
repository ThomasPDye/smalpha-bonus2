#pragma once

#include <string>
#include <vector>
#include <map>

namespace smorse
{
    std::string smorse(std::string word);
    std::map<std::string, std::string> map_smorse(std::vector<std::string> words);
    std::map<std::string, std::size_t> map_smorse_code_occurences(std::map<std::string, std::string> word_code_map);
} // namespace morse

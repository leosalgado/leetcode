#include <iterator>
#include <string>
#include <unordered_map>
#include <vector>
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> anagramsGroups;

    for (auto &s : strs) {
      int count[26] = {0};

      for (char c : s) {
        count[c - 'a']++;
      }

      std::string key;
      for (int i = 0; i < std::size(count); i++) {
        key += "#" + std::to_string(count[i]);
      }

      anagramsGroups[key].push_back(s);
    }

    std::vector<std::vector<std::string>> result;
    for (auto &entry : anagramsGroups) {
      result.push_back(entry.second);
    }
    return result;
  }
};

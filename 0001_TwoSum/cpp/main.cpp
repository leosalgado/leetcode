#include <unordered_map>
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    std::unordered_map<int, int> hashmap;

    for (int i = 0; i < nums.size(); i++) {
      int component = target - nums[i];

      if (hashmap.find(component) != hashmap.end()) {
        return {hashmap[component], i};
      }
      hashmap[nums[i]] = i;
    }
    return {};
  }
};

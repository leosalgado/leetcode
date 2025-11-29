class Solution {
public:
  vector<int> getConcatenation(vector<int> &nums) {
    vector<int> x = nums;
    for (int n : nums) {
      x.push_back(n);
    }
    return x;
  }
};

class Solution {
public:
  vector<int> recoverOrder(vector<int> &order, vector<int> &friends) {
    vector<int> x;
    for (int o : order) {
      for (int f : friends) {
        if (o == f) {
          x.push_back(o);
          break;
        }
      }
    }
    return x;
  }
};

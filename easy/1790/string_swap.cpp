#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
  bool areAlmostEqual(string s1, string s2) {
    if (s1 == s2)
      return true;

    int diff = 0;
    vector<int> idx;
    for (int i = 0; i < s1.size(); i++) {
      if (s1[i] != s2[i]) {
        diff++;
        idx.push_back(i);
      }
    }

    if (diff == 2)
      return s1[idx[0]] == s2[idx[1]] && s1[idx[1]] == s2[idx[0]];

    return false;
  }
};

int main() {
  Solution solution;
  string s1 = "aa";
  string s2 = "ac";

  cout << solution.areAlmostEqual(s1, s2) << endl;

  return 0;
}

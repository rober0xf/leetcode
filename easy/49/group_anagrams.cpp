#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> anag;

        for (const string &s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            anag[sorted_s].push_back(s);
        }

        vector<vector<string>> result;
        for (const auto &s : anag) {
            result.push_back(s.second);
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = solution.groupAnagrams(strs);
    for (auto vec : result) {
        for (auto str : vec) {
            cout << str << endl;
        }
        cout << endl;
    }

    return 0;
}

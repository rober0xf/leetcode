#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        if (strs.size() == 0)
            return vector<vector<string>>{{""}};
        if (strs.size() == 1)
            return vector<vector<string>>{{strs[0]}};

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result{};

        for (auto &s : strs) {
            string tmp = s;
            sort(s.begin(), s.end());
            mp[s].push_back(tmp);
        }
        for (auto &anag : mp) {
            result.push_back(anag.second);
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);

    for (const auto &anag : result) {
        cout << "[";
        for (const auto &word : anag) {
            cout << word << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}

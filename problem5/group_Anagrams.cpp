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

        unordered_map<string, vector<string>> anag;
        vector<vector<string>> result;

        for (const auto &s : strs) {
            vector<int> freq(26, 0);
            for (auto c : s) {
                freq[c - 'a']++;
            }
            string key;
            for (int count : freq) {
                key += to_string(count) + "#";
            }
            anag[key].push_back(s);
        }

        for (const auto &g : anag) {
            result.push_back(g.second);
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = solution.groupAnagrams(strs);
    for (const auto &g : result) {
        for (const auto &word : g) {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}

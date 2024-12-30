#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
  public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> count(26, 0); // english alph

        // count frequency
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int c : count) {
            if (c != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    string s = "anagram";
    string t = "nagaram";

    cout << solution.isAnagram(s, t) << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;
class Solution {
  public:
    string reverseWords(string s) {
        int l = 0;
        int r = s.size() - 1;
        string res;
        string word;

        while (l <= r) {
            if (s[l] != ' ') {
                word += s[l];
            } else if (!word.empty()) {
                word += " ";
                res.insert(0, word);
                word.clear();
            }
            l++;
        }
        if (!word.empty()) {
            word += " ";
            res.insert(0, word);
        }
        if (!res.empty() && res[res.size() - 1] == ' ') {
            res.pop_back();
        }

        return res;
    }
};

int main() {
    Solution sol;
    string s = "the sky is blue";

    cout << sol.reverseWords(s) << endl;

    return 0;
}

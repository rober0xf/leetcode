#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;
class Solution {
    public:
        string clearDigits(string s) {
            int dcount = 0;
            string res;
            for (int i = s.size() - 1; i >= 0; i--) {
                if (isdigit(s[i])) {
                    dcount++;
                } else if (dcount) {
                    dcount--;
                } else {
                    res.push_back(s[i]);
                }
            }
            reverse(res.begin(), res.end());

            return res;
        }
};

int main() {
    Solution sol;
    string s = "abc";

    cout << sol.clearDigits(s) << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <utility>

using namespace std;
class Solution {
  public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            while (l < r && vowels.find(s[l]) == string::npos) {
                l++;
            }
            while (l < r && vowels.find(s[r]) == string::npos) {
                r--;
            }
            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "leetcode";

    cout << sol.reverseVowels(s) << endl;

    return 0;
}

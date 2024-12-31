#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same
forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

using namespace std;
class Solution {
  public:
    bool isPalindrome(string &s) {
        if (s.size() == 0 || s.size() == 1)
            return true;

        transform(s.begin(), s.end(), s.begin(), ::tolower); // convert s to lowercase, the second s.begin() tells where to save the result
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end()); // delete all characters not alphabetical
        // as we consider numbers also as a part of palindrome, we need to use isalnum. if we do not consider numbers then just use isalpha

        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};

int main() {
    Solution solution;
    string s = "0P";

    cout << solution.isPalindrome(s) << endl;

    return 0;
}

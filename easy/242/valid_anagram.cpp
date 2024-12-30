#include <iostream>
#include <string>
#include <unordered_map>

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

using namespace std;
class Solution {
  public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> scount;
        unordered_map<char, int> tcount;
        for (int i = 0; i < s.size(); i++) {
            scount[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            tcount[t[i]]++;
        }

        return scount == tcount;
    }
};

int main() {
    Solution solution;
    string s = "rat";
    string t = "car";

    cout << solution.isAnagram(s, t) << endl;

    return 0;
}

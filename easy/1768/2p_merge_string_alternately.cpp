#include <iostream>
#include <string>

using namespace std;
class Solution {
  public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;

        string merged;
        // if they have the same length
        while (i < word1.size() && j < word2.size()) {
            merged += word1[i++]; // you can add it and then increment
            merged += word2[j++];
        }

        // adds the rest of word1 if its bigger
        while (i < word1.size()) {
            merged += word1[i++];
        }

        // adds the rest of word2 if its bigger
        while (j < word2.size()) {
            merged += word2[j++];
        }

        return merged;
    }
};

int main() {
    Solution solution;
    string s1 = "abcd";
    string s2 = "pq";

    cout << solution.mergeAlternately(s1, s2) << endl;

    return 0;
}

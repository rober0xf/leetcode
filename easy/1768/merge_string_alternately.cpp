#include <iostream>
#include <string>

using namespace std;
class Solution {
  public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        string merged = "";

        while (i < word1.size() || i < word2.size()) {
            if (i < word1.size())
                merged.push_back(word1[i]);

            if (i < word2.size())
                merged.push_back(word2[i]);

            i++;
        }
        return merged;
    }
};

int main() {
    Solution solution;
    string s1 = "ab";
    string s2 = "pqrs";

    cout << solution.mergeAlternately(s1, s2) << endl;

    return 0;
}

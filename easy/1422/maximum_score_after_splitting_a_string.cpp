#include <iostream>
#include <string>

using namespace std;
class Solution {
  public:
    int maxScore(string s) {
        int max_score = 0;
        int zeros = 0;
        int ones = 0;

        // first we need to count all ones of the string because the ones will   be at the second part
        for (char c : s) {
            if (c == '1')
                ones++;
        }

        // we must do if until -1 bc we need two parts. for example "00" with s.size() gives us 2. but the correct answer is 1
        for (int i = 0; i < s.size() - 1; i++) {
            int max_sofar = 0;
            if (s[i] == '1')
                ones--;

            if (s[i] == '0') // because the zeros will be a the first part here we count them
                zeros++;

            max_sofar = ones + zeros;
            if (max_sofar > max_score)
                max_score = max_sofar;
        }

        return max_score;
    }
};

int main() {
    Solution solution;
    string s = "1111";

    cout << solution.maxScore(s) << endl;

    return 0;
}

#include <iostream>
#include <numeric>
#include <string>

using namespace std;
class Solution {
  public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int str1_length = str1.size();
        int str2_length = str2.size();

        return str1.substr(0, gcd(str1_length, str2_length));
    }
};

int main() {
    Solution solution;
    string str1 = "ABCABC";
    string str2 = "ABC";

    cout << solution.gcdOfStrings(str1, str2) << endl;

    return 0;
}

#include <iostream>

using namespace std;
class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long x_reversed = 0;
        int x_temp = x;
        while (x_temp != 0) {
            x_reversed = (x_reversed * 10) + (x_temp % 10);
            x_temp = x_temp / 10;
        }

        return (x == x_reversed);
    }
};

int main() {
    Solution solution;
    int x = 12321;

    cout << solution.isPalindrome(x) << endl;
}

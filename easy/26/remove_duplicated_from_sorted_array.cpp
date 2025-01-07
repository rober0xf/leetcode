#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        set<int> unique;
        int nums_size = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            unique.insert(nums[i]);
        }

        if (unique.size() < nums.size()) {
            nums.clear();
            for (const int &n : unique) {
                nums.push_back(n);
            }
            int difference = nums_size - unique.size();
            for (int i = 0; i < difference; i++) {
                nums.push_back(-101);
            }
        }

        return unique.size();
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << solution.removeDuplicates(nums) << endl;

    return 0;
}

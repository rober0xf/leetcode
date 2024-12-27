#include <iostream>
#include <unordered_map>
#include <vector>

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// for some reason i thought that it needs to appear more than two
using namespace std;
class Solution {
  public:
    bool containsDuplicated(vector<int> &nums) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]]++;
        }
        for (auto &k : seen) {
            if (k.second >= 2)
                return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    // vector<int> nums = {1, 1};

    cout << solution.containsDuplicated(nums) << endl;

    return 0;
}

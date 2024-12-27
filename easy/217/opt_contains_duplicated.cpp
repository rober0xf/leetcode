#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;
class Solution {
  public:
    bool containsDuplicated(vector<int> &nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    //  vector<int> nums = {1, 1};

    cout << solution.containsDuplicated(nums) << endl;

    return 0;
}

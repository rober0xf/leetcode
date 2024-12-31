#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int seen = target - nums[i];
            if (map.find(seen) != map.end()) {
                return {i, map[seen]};
            }

            map.insert({nums[i], i});
        }

        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 4};
    int target = 9;

    if (solution.twoSum(nums, target).empty()) {
        cout << "no solution found" << endl;
    }

    cout << "[";
    for (int k : solution.twoSum(nums, target)) {
        cout << k << ", ";
    }
    cout << "]" << endl;

    return 0;
}

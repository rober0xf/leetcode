#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int> &nums) {
            vector<int> res(nums.size(), 1);
            int prefix = 1;
            int postfix = 1;

            for (int i = 0; i < nums.size(); i++) {
                res[i] = prefix;
                prefix *= nums[i];
            }
            for (int i = nums.size() - 1; i >= 0; i--) {
                res[i] = postfix * res[i];
                postfix *= nums[i];
            }

            return res;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};

    for (const auto &num : sol.productExceptSelf(nums)) {
        cout << num << "  ";
    }
    cout << "\n";

    return 0;
}

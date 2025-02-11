#include <iostream>
#include <vector>

#define ll long long
using namespace std;
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            ll product = 1;
            int zeros = 0;
            vector<int> res(nums.size(), 1);
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    zeros++;
                } else {
                    product *= nums[i];
                }
            }

            if (zeros > 1) {
                return vector<int>(nums.size(), 0);
            }

            for (int i = 0; i < nums.size(); i++) {
                if (zeros == 1) {
                    if (nums[i] == 0) {
                        res[i] = product;
                    } else {
                        res[i] = 0;
                    }
                } else
                    res[i] = product / nums[i];
            }

            return res;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 1, 0, -3, 3};

    for (const auto& num : sol.productExceptSelf(nums)) {
        cout << num << "\t";
    }
    cout << "\n";

    return 0;
}

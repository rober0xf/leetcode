#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int left = 1; // the array is sorted so the firs element its ok

        for (int right = 1; right < nums.size(); right++) {
            if (nums[right] != nums[right - 1]) {
                nums[left] = nums[right];
                left++;
            }
        }

        return left;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << solution.removeDuplicates(nums) << endl;

    return 0;
}

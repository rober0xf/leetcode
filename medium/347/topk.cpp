#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        if (nums.size() == 1 && k == 1)
            return {nums[0]};

        map<int, int> frequency;
        for (const int k : nums) {
            frequency[k]++;
        }

        vector<int> result;
        vector<pair<int, int>> sorted_vec(frequency.begin(), frequency.end());

        sort(sorted_vec.begin(), sorted_vec.end(), [](const auto &a, const auto &b) { return a.second > b.second; });

        int count = 0;
        for (auto n : sorted_vec) {
            result.push_back(n.first);
            count++;
            if (count == k)
                break;
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 1, -1, 2, -1, 2, 3};
    int k = 2;

    for (int k : solution.topKFrequent(nums, k)) {
        cout << k;
    }

    return 0;
}

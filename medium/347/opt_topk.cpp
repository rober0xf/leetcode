#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        // count frequency
        unordered_map<int, int> freq;
        for (const int &n : nums) {
            freq[n]++;
        }

        // create buckets
        // max size of bucket is nums.size() + 1
        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto &[num, ccount] : freq) {
            bucket[ccount].push_back(num);
        }

        vector<int> result;

        // take top k from each bucket
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; --i) {
            for (const int &n : bucket[i]) {
                result.push_back(n);
                if (result.size() == k) {
                    break;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    for (auto n : solution.topKFrequent(nums, k)) {
        cout << n;
    }

    cout << endl;

    return 0;
}

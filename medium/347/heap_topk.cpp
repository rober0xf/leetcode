#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> freq;
        for (const int num : nums) {
            freq[num]++;
        }

        // min heap to keep store the smallest elements at the top
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        for (auto n : freq) {
            min_heap.push({n.second, n.first});
            if (min_heap.size() > k) { // if the min heap size is greater than k, we remove the top element (which is the least frequent element)
                min_heap.pop();
            }
        }

        vector<int> result(k);
        for (int i = k - 1; i >= 0; i--) {
            result[i] = min_heap.top().second;
            min_heap.pop();
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = solution.topKFrequent(nums, k);
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

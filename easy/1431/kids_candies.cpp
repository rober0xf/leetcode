#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
        vector<bool> res;
        int max_cand = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            int current_candies = candies[i] + extraCandies;
            if (current_candies >= max_cand) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> candies = {4, 2, 1, 1, 2};
    int extraCandies = 1;

    for (const bool &b : sol.kidsWithCandies(candies, extraCandies)) {
        cout << b;
    }
    cout << endl;

    return 0;
}

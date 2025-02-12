#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                count++;

                if (count >= n)
                    return true;
            }
        }
        return count >= n;
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 2;

    cout << sol.canPlaceFlowers(flowerbed, n) << endl;

    return 0;
}

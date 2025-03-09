#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
    public:
        int compress(vector<char>& chars) {
            string res;
            if (chars.size() == 1) {
                res.push_back(chars[0]);
                return 1;
            }

            int l = 0;
            int r = chars.size();

            while (l < r) {
                char curr = chars[l];
                int count = 0;
                while (l < r && chars[l] == curr) {
                    count++;
                    l++;
                }
                res.push_back(curr);
                if (count > 1) {
                    res += to_string(count);
                }
            }
            for(int i = 0; i < res.size(); i++){
                chars[i] = res[i];
            }

            return res.size();
        }
};

int main() {
    Solution sol;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << sol.compress(chars) << endl;
}
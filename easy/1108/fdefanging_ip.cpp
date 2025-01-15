#include <iostream>
#include <string>

using namespace std;
class Solution {
  public:
    string defangIPaddr(string address) {
        string res;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                res += "[.]";
            } else {
                res += address[i];
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    string address = "1.1.1.1";

    cout << sol.defangIPaddr(address) << endl;

    return 0;
}

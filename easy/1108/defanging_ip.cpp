#include <iostream>
#include <regex>
#include <string>

using namespace std;
class Solution {
  public:
    string defangIPaddr(string &address) { return regex_replace(address, regex("\\."), "[.]"); }
};

int main() {
    Solution solution;
    string address = "1.1.1.1";

    cout << solution.defangIPaddr(address) << endl;

    return 0;
}

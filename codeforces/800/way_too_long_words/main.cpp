#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        string inp;
        cin >> inp;

        if (find_if(inp.begin(), inp.end(), ::isdigit) != inp.end()) {
            cout << endl;
        }
        if (inp.size() <= 10) {
            cout << inp << endl;
        } else {
            int len = inp.size() - 2;
            cout << inp[0] + to_string(len) + inp[inp.size() - 1] << endl;
        }
    }
    return 0;
}

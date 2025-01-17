#include <iostream>
#include <vector>

using namespace std;
int main() {
    long long inp = 0;
    vector<long long> res;

    cin >> inp;
    res.push_back(inp);
    while (inp != 1) {
        if (inp % 2 == 0) {
            inp /= 2;
            res.push_back(inp);
        } else {
            inp = inp * 3 + 1;
            res.push_back(inp);
        }
    }

    for (const long long k : res) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}

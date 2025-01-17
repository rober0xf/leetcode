#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int inp = 0;
    cin >> inp;
    vector<int> seq(inp - 1);
    for (int i = 0; i < inp - 1; i++) {
        cin >> seq[i];
    }

    sort(seq.begin(), seq.end());
    int res = inp;
    for (int i = 0; i < inp - 1; i++) {
        if (seq[i] != i + 1) {
            res = i + 1;
            break;
        }
    }

    cout << res << endl;
    return 0;
}

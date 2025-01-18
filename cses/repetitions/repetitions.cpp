#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int main() {
    string inp;
    cin >> inp;

    int count = 1;
    int max_count = 0;
    for (int i = 1; i < inp.size(); ++i) {
        if (inp[i] == inp[i - 1]) {
            count++;
            max_count = max(max_count, count);
        } else {
            count = 1;
        }
    }
    max_count = max(max_count, count);

    cout << max_count << endl;

    return 0;
}

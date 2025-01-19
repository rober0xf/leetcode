#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        string X;
        cin >> X;

        if (X == "++X" || X == "X++")
            count++;
        if (X == "--X" || X == "X--")
            count--;
    }

    cout << count << endl;

    return 0;
}

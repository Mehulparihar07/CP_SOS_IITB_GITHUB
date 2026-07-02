#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zero = 0, one = 0;

        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }

        cout << (min(zero, one) % 2 ? "DA" : "NET") << '\n';
    }

    return 0;
}
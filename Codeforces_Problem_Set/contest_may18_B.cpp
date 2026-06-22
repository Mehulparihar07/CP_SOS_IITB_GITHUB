#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int twos = 0;
        int ones_threes = 0;

        for (char c : s) {
            if (c == '4') continue;

            if (c == '2') {
                twos++;
            } else { // 1 or 3
                ones_threes = max(ones_threes + 1, twos + 1);
            }
        }

        int keep = max(twos, ones_threes);

        cout << s.size() - keep << '\n';
    }

    return 0;
}
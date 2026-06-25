#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;

        vector<int> cnt(26, 0);

        int i = s.size() - 1;
        int j = t.size() - 1;

        while (i >= 0 && j >= 0) {
            if (s[i] == t[j]) {
                if (cnt[s[i] - 'A'] > 0)
                    break;
                i--;
                j--;
            } else {
                cnt[s[i] - 'A']++;
                i--;
            }
        }

        if (j == -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
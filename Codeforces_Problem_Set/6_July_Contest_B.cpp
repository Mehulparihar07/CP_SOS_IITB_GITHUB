#include <iostream>
#include <vector>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        //------------------------------------------
        // prefix score for left condition
        //
        // +1 for value 1
        // -1 for value 2
        // -1 for value 3
        //------------------------------------------

        vector<int> pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {

            pref[i] = pref[i - 1];

            if (a[i] == 1) pref[i]++;

            else pref[i]--;
        }

        //------------------------------------------
        // suffix score for middle condition
        //
        // +1 for 1
        // +1 for 2
        // -1 for 3
        //------------------------------------------

        vector<int> suf(n + 2, 0);

        for (int i = n; i >= 1; i--) {

            suf[i] = suf[i + 1];

            if (a[i] == 3)
                suf[i]--;
            else
                suf[i]++;
        }

        //------------------------------------------
        // good[i] :
        // Can suffix starting at i become
        // middle + right ?
        //------------------------------------------

        vector<bool> good(n + 2, false);

        int mn = suf[n];          // suffix score at start of right part

        for (int i = n - 1; i >= 2; i--) {

            if (suf[i] >= mn)
                good[i] = true;

            mn = min(mn, suf[i]);
        }

        //------------------------------------------
        // Scan left part
        //------------------------------------------

        bool ok = false;

        for (int i = 1; i <= n - 2; i++) {

            if (pref[i] >= 0 && good[i + 1]) {

                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}
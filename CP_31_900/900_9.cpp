#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        int g = 0;

        for (int i = 1; i <= n; i++) {
            cin >> p[i];

            if (p[i] != i) {
                g = __gcd(g, abs(i - p[i]));
            }
        }

        cout << g << '\n';
    }

    return 0;
}
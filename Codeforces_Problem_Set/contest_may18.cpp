#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        long long n, a, b;
        cin >> n >> a >> b;

        // Individual cheaper
        if (3 * a <= b) {
            cout << n * a << endl;
        }
        else {

            long long groups = n / 3;
            long long rem = n % 3;

            long long ans = groups * b;

            // Remaining students
            ans += min(rem * a, b);

            cout << ans << endl;
        }
    }

    return 0;
}
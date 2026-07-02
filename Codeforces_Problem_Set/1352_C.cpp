#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        long long q = k / (n - 1);
        long long r = k % (n - 1);

        if(r == 0)
            cout << q * n - 1 << '\n';
        else
            cout << q * n + r << '\n';
    }
}
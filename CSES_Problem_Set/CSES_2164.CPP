#include <iostream>
using namespace std;
#define ll long long

ll solve(ll n, ll k)
{
    if (n == 1) return 1;

    // First half removals are all even numbers
    if (k <= n / 2)
        return 2 * k;

    ll x = solve((n + 1) / 2, k - n / 2);

    if (n % 2 == 0)
        return 2 * x - 1;

    // odd n
    if (x == 1)
        return n;

    return 2 * x - 3;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        ll n, k;
        cin >> n >> k;

        cout << solve(n, k) << "\n";
    }
}
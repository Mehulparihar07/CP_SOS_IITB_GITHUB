#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

long long binexp(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    long long N = n + m;

    vector<long long> fact(N + 1);
    fact[0] = 1;

    for (long long i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % MOD;

    long long ans = fact[n + m - 1];

    ans = ans * binexp(fact[n - 1], MOD - 2) % MOD;
    ans = ans * binexp(fact[m], MOD - 2) % MOD;

    cout << ans << '\n';
}
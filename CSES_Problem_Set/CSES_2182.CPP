#include <iostream>
using namespace std;

const long long MOD = 1000000007;
const long long MOD1 = MOD - 1;   // 1000000006

long long binexp(long long a, long long b, long long mod = MOD)
{
    long long ans = 1;
    a %= mod;

    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }

    return ans;
}

int main()
{
    long long n;
    cin >> n;

    long long no_of_divisors = 1;
    long long sum_of_divisors = 1;

    // For product of divisors
    long long product_of_divisors = 1;
    long long divisor_count_mod_m1 = 1;

    for (int i = 1; i <= n; i++)
    {
        long long x, k;
        cin >> x >> k;

        // -----------------------------
        // 1. NUMBER OF DIVISORS
        // d(N) = Π (k+1)
        // -----------------------------
        no_of_divisors =
            (no_of_divisors * ((k + 1) % MOD)) % MOD;

        // -----------------------------
        // 2. SUM OF DIVISORS
        // σ(N) *= (x^(k+1)-1)/(x-1)
        // -----------------------------
        long long geometric_sum =
            ((binexp(x, k + 1) - 1 + MOD) % MOD);

        geometric_sum =
            (geometric_sum *
             binexp(x - 1, MOD - 2)) % MOD;

        sum_of_divisors =
            (sum_of_divisors * geometric_sum) % MOD;

        // -----------------------------
        // 3. PRODUCT OF DIVISORS
        // Standard CSES recurrence
        // -----------------------------

        long long exponent =
            (k * (k + 1) / 2) % MOD1;

        product_of_divisors =
            binexp(product_of_divisors,
                   k + 1,
                   MOD);

        product_of_divisors =
            (product_of_divisors *
             binexp(
                 binexp(x, exponent, MOD),
                 divisor_count_mod_m1,
                 MOD
             )) % MOD;

        divisor_count_mod_m1 =
            (divisor_count_mod_m1 *
             ((k + 1) % MOD1)) % MOD1;
    }

    cout << no_of_divisors << " "
         << sum_of_divisors << " "
         << product_of_divisors << '\n';

    return 0;
}
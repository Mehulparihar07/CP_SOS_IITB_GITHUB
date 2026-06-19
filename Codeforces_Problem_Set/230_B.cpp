#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    const long long N = 1e6 + 10;
    vector<bool> isPrime(N, 1);

    isPrime[0] = isPrime[1] = 0;

    for (long long i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            for (long long j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int n;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        long long x = sqrt(v[i]);

        if (x * x == v[i] && isPrime[x])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
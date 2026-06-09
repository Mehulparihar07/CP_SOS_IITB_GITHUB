#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long sum = 0;
    long long k = 1e9 + 7;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                sum = (sum + i % k) % k;
            }
            else
            {
                sum = (sum + i % k + (n / i) % k) % k;
            }
        }
    }

    cout << sum << endl;
    return 0;
}
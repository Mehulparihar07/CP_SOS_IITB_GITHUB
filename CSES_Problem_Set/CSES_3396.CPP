#include<iostream>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        for (long long i = n + 1; ; i++)
        {
            if (isPrime(i))
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}
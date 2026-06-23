#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long t;

    cin >> n >> t;

    vector<long long> k(n);

    for(int i = 0; i < n; i++)
        cin >> k[i];

    long long low = 0;
    long long high = 1e18;

    while(high - low > 1) {

        long long mid = (low + high) / 2;

        long long products = 0;

        for(int i = 0; i < n; i++) {
            products += mid / k[i];

            if(products >= t) break;
        }

        if(products >= t)
            high = mid;
        else
            low = mid;
    }

    cout << high << '\n';
}
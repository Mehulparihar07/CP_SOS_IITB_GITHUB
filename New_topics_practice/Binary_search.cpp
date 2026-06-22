#include <iostream>
using namespace std;

double eps = 1e-6;

int main() {
    double x;
    cin >> x;

    double low = 1, high = x;

    while (high - low > eps) {
        double mid = (high + low) / 2;

        if (mid * mid > x)
            high = mid;
        else
            low = mid;
    }

    cout << low << " " << high;

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long w, h, k, x;
        cin >> w >> h;

        vector<pair<long long, long long>> xi, xf, yi, yf;

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            xi.push_back({x, 0});
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            xf.push_back({x, h});
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            yi.push_back({0, x});
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            yf.push_back({w, x});
        }

        long long ans_c1 = 0, ans_c2 = 0, ans_c3 = 0, ans_c4 = 0;

        ans_c1 = (xi.back().first - xi.front().first) * h;
        ans_c2 = (xf.back().first - xf.front().first) * h;
        ans_c3 = (yi.back().second - yi.front().second) * w;
        ans_c4 = (yf.back().second - yf.front().second) * w;

        cout << max(max(ans_c1, ans_c2), max(ans_c3, ans_c4)) << "\n";
    }

    return 0;
}
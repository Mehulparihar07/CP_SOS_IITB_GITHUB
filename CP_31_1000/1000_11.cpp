#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, D;
    cin >> n >> D;

    vector<int> P(n);
    for (int i = 0; i < n; i++)
        cin >> P[i];

    sort(P.begin(), P.end());

    int l = 0;
    int r = n - 1;
    int ans = 0;

    while (l <= r) {
        int need = D / P[r] + 1;

        
        if (r - l + 1 >= need) {
            ans++;
            l += need - 1; 
            r--;           
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
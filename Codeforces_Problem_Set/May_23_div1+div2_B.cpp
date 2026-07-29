#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n+1), b(n+1);

        for(long long i = 1; i <= n; i++)
            cin >> a[i];

        for(long long i = 1; i <= n; i++)
            cin >> b[i];

        long long ans = 0;
        long long mx = 0;

        for(long long i = 1; i <= n; i++){
            ans += max(a[i], b[i]);      // take larger into b
            mx = max(mx, min(a[i], b[i])); // remember largest minimum
        }

        ans += mx;

        cout << ans << endl;
    }

    return 0;
}
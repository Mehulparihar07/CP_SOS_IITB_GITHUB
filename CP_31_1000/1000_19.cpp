#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<long long,long long>> a;

        for(long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push_back({x, i + 1});   // store original index
        }

        sort(a.begin(), a.end(), greater<pair<long long,long long>>());

        vector<pair<long long,long long>> ans;
        vector<long long> pos(n + 1);

        long long k = 0;

        for(long long i = 0; i < n - 1; i += 2)
        {
            ans.push_back({a[i].first, k + 1});
            pos[a[i].second] = k + 1;

            ans.push_back({a[i + 1].first, -k - 1});
            pos[a[i + 1].second] = -k - 1;

            k++;
        }

        if(n % 2)
        {
            ans.push_back({a[n - 1].first, n / 2 + 1});
            pos[a[n - 1].second] = n / 2 + 1;
        }

        long long fans = 0;

        for(auto x : ans)
            fans += 2LL * x.first * abs(x.second);

        cout << fans << endl;
        cout << 0 << " ";

        for(long long i = 1; i <= n; i++)
            cout << pos[i] << " ";

        cout << endl;
    }

    return 0;
}
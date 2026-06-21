#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0 ; i < n ; i++)
        {
            if (a[i] != 0 && (i == 0 || a[i-1] == 0))
            {
                ans++;
            }
        }

        if (ans == 0)
        {
            cout << 0 << endl;
        }
        else if (ans == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
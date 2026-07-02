#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        map<int,int> runA, runB;

        int cntA = 1, cntB = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (i > 0)
            {
                if (a[i-1] == a[i])
                {
                    cntA++;
                }
                else
                {
                    runA[a[i-1]] = max(runA[a[i-1]], cntA);
                    cntA = 1;
                }
            }
        }

        runA[a[n-1]] = max(runA[a[n-1]], cntA);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (i > 0)
            {
                if (b[i-1] == b[i])
                {
                    cntB++;
                }
                else
                {
                    runB[b[i-1]] = max(runB[b[i-1]], cntB);
                    cntB = 1;
                }
            }
        }

        runB[b[n-1]] = max(runB[b[n-1]], cntB);

        int ans = 1;

        for (auto x : runA)
        {
            ans = max(ans, runA[x.first] + runB[x.first]);
        }

        for (auto x : runB)
        {
            ans = max(ans, runA[x.first] + runB[x.first]);
        }

        cout << ans << endl;
    }

    return 0;
}
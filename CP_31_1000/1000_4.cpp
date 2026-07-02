#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long sumSecond = 0;
        int smallestMin = 1e9;
        int smallestSecond = 1e9;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            vector<int> a(m);

            for (int j = 0; j < m; j++)
                cin >> a[j];

            sort(a.begin(), a.end());

            smallestMin = min(smallestMin, a[0]);
            smallestSecond = min(smallestSecond, a[1]);

            sumSecond += a[1];
        }

        cout << sumSecond - smallestSecond + smallestMin << endl;
    }

    return 0;
}
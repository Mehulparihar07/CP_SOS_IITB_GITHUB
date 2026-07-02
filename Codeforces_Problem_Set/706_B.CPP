#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    int minimum = INT_MAX;

    vector<int> x(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        minimum = min(minimum, x[i]);
    }

    sort(x.begin() + 1, x.end());

    cin >> q;

    vector<int> m(q + 1);

    for (int i = 1; i <= q; i++)
    {
        cin >> m[i];

        if (m[i] < minimum)
        {
            cout << 0 << endl;
            continue;
        }

        int low = 1, high = n, mid;

        while (high - low > 1)
        {
            mid = (low + high) / 2;

            if (x[mid] <= m[i])
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }

        if (x[high] <= m[i])
        {
            cout << high << endl;
        }
        else
        {
            cout << low << endl;
        }
    }

    return 0;
}
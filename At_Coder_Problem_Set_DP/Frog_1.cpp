#include <iostream>
#include <vector>
#include <climits>
using namespace std;
const int N = 1e5 + 10;
vector<int> DP(N, -1);
vector<int> h(N);
int funct(int n)
{
    int cost = INT_MAX;
    if (n == 1)
        return 0;
    if (n == 2)
        return abs(h[2] - h[1]);

    if (DP[n] != -1)
    {
        return DP[n];
    }
    cost = min(cost, abs(h[n] - h[n - 1]) + funct(n - 1));
    DP[n] = cost;
    if (n > 2)
    {
        cost = min(cost, abs(h[n] - h[n - 2]) + funct(n - 2));
        DP[n] = cost;
    }
    return cost;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }

    cout << funct(n) << endl;
    return 0;
}
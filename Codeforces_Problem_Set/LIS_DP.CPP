#include<iostream>
#include<vector>
using namespace std;

vector<int> a;
vector<int> dp;

int lis(int i, vector<int> &a) {

    int ans = 1;

    if(i == 0) return 1;

    if(dp[i] != -1) return dp[i];

    for(int j = 0; j < i; j++)
    {
        if(a[i] > a[j])
        {
            ans = max(ans, lis(j, a) + 1);
        }
    }

    return dp[i] = ans;
}

int main(){

    a = {10, 9, 2, 5, 3, 7, 101, 18};

    dp.assign(a.size(), -1);

    int ans = 1;

    for(int i = 0; i < a.size(); i++)
    {
        ans = max(ans, lis(i, a));
    }

    cout << ans << endl;

    return 0;
}
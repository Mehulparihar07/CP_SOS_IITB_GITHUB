#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int> x(n+1) ;
    int ans = INT_MIN ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> x[i] ;
        if (i > 1)
        {
           ans = max(ans , __gcd(x[i] , x[i-1])) ;
        }
        
    }
    cout << ans << endl ;
    return 0;
}
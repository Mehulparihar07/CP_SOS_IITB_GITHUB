#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int> p(n+1) ;
        int ans = 0 ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> p[i] ;
            if (i > 1)
            {
                if (abs(p[i] - p[i-1]) == __gcd(p[i] , p[i-1]))
                {
                    ans++ ;
                } 
            }
        }
    cout << ans << endl ;    
    }
    
    return 0;
}
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int> a(n+1) ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }
        int p , q , r ;
        int count ;
        p = q = r = INT_MIN ; 
        a[0] = a[n] ;
        for (int i = 1 ; i <= n ; i++)
        {
            count = a[i-1] - a[i] ;
            p = max(count , p) ;
        }
        for (int i = 1 ; i < n ; i++)
        {
            count = a[n] - a[i] ;
            q = max(count , q) ;
        }
        for (int i = 2 ; i <= n ; i++)
        {
            count = a[i] - a[1] ;
            r = max(count , r) ;
        }
        
    cout << max(p , max(q , r)) << endl ;
    }
    

return 0;
}
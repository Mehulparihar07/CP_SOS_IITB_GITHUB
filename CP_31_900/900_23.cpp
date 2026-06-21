#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
       int n ;
       cin >> n ;
       vector<int> a(n+1) ;
       int ans = -1 ;
       
       for (int i = 1 ; i <= n ; i++)
       {
        cin >> a[i] ;
       }
       for (int i = 1 ; i <= n ; i++)
       {
         ans &= a[i] ; 
       }
    cout << ans << endl ;   
    }
    
    return 0;
}
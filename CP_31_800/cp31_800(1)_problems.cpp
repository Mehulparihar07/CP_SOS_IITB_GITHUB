#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
       int n , k ;
       cin >> n >> k ;
       vector<int> a(n) ;

       for (int i = 0; i < n ; i++)
       {
         cin >> a[i] ;
       }
       
       for (int x = 0; x < n ; x++)
       {
         sort(a.begin() + x ,a.begin() + x + k) ;
       }

       bool sorted = is_sorted(a.begin(),a.end()) ;

       if (sorted == true)
       {
         cout << "YES" << endl ;
       }

       else cout << "NO" << endl ;
       
       
    }
    
return 0;
}
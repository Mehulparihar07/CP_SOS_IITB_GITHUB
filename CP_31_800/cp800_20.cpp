#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x ;
        cin >> n ;
       // int k = n ;
        vector<int> a ;
        vector<int> b(n) ;
        for (int i = 0 ; i < n  ; i++)
        {
           cin >> x ;
           a.push_back(x) ;   
        }
        b[0] = n + 1 - a[0] ;
        for (int i = 1 ; i < n ; i++)
        {
            b[i] = a[i-1] + b[i-1] - a[i] ;
        }
        for (int i = 0 ; i < n ; i++)
        {
            cout << b[i] << " " ;
        }
        cout << endl ;
        
    }
    
return 0;
}
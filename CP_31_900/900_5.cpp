#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , l , r ;
        cin >> n ;
        vector<int> a ;
        // int m = 0 ;
        
        for (int i = 0;  i < n ; i++)
        {
            int x ;
            cin >> x ;
            a.push_back(x) ;
            // m ^= x ;
        }
        if (n % 2 == 0)
        {
           cout << "2" << endl ;
           cout << "1" << " " << n << endl ;
           cout << "1" << " " << n << endl ;
        }
        if (n % 2 == 1)
        {
           cout << "4" << endl ;
           cout << "1" << " " << n << endl ;
           cout << "1" << " " << n - 1 << endl ;
           cout << n - 1 << " " << n  << endl ;
           cout << n - 1 << " " << n  << endl ;
        }
        
    }
    
return 0;
}
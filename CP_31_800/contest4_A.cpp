#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x ;
        cin >> n ;
        int ans ;
        int a , b , c ;
        a = b = c = 0 ;
        // vector<int> w ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x ;
            if (x == 0)
            {
                a++ ;
            }
            if (x == 1)
            {
                b++ ;
            }
            if (x == 2)
            {
                c++ ;
            }
            // w.push_back(x) ;
        }
        if (b == c)
        {
            ans = a + b ;
        }
        if (b > c)
        {
            ans = a + c + (b - c) / 3 ;
        }
        
        if (b < c)
        {
            ans = a + b + (c - b) / 3 ;
        }
        
    cout << ans << endl ;
    }
    
return 0;
}
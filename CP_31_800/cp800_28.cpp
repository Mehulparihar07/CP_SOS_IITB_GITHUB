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
        vector<int> a ;
        vector<int> f(n) ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x ;
            a.push_back(x) ;
        }
        for (int i = 0 ; i < n ; i++)
        {
            f[i] = a[n - i - 1] ;
        }
        if (f[0] == f[1] )
            {
                  for (int i = 1 ; i < n ; i++)
                {
                   if (f[i] != f[0])
                   {
                    swap(f[1] , f[i]) ;
                    break ;
                   }
                }
            }
        if (f[0] == f[1])
        {
            cout << "No" << endl ;
        }
        else{
            cout << "Yes" << endl ;
            for (int i = 0 ; i < n ; i++)
            {
                cout << f[i] << " " ;
            }
                cout << endl ;
        }
        
    }
    
return 0;
}
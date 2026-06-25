#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T ;
    cin >> T ;
    while (T--)
    {
        int n ;
        cin >> n ;
        vector<int> p(n+1) ;
        int cnt = 0 ;
        bool csk = true ;
        for (int i = 1 ; i <= n ; i++)
        {
           cin >> p[i] ; 
        }
        for (int i = 2 ; i <= n - 1 ; i++)
        {
            if (p[i] > p[i-1] && p[i] > p[i+1])
            {
                cout << "YES" << endl ;
                cout << i-1 << " " << i << " " << i+1 << endl ;
                csk = false ;
                break;
            }
            
        }
        if (csk)
        {
            cout << "NO" << endl ;
        }
        
        
    }
    
    return 0;
}
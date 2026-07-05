#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        int ans = 0 ;
        vector<int> a(n) ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for (int i = 0 ; i < n - 1 ; i++)
        {
            for (int j = i + 1 ; j < n ; j++)
            {
                if (a[j] > a[i])
                {
                    a[j] = a[i] ;
                }
                
            }
            
        }
        for (int i = 0 ; i < n ; i++)
        {
            ans += a[i] ;
        }
        
    cout << ans << endl ;    
    }
    
    return 0;
}
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
        vector<int> a(n+1) , b(n+1) , c(n+1);
       for (int i = 1 ; i <= n ; i++)
       {
        cin >> a[i] ;
       }
       for (int i = 1 ; i <= n ; i++)
       {
        cin >> b[i] ;
       }
       vector<bool> x(n+1 , true) ;
       for (int i = 1 ; i <= n ; i++)
       {
             for (int j = 1 ; j <= n ; j++)
            {
                if (a[i] <= b[j] && x[j] == true)
                {
                    c[i] = b[j] ;
                    x[j] = false ;
                    break ;
                }
                
            }
       }
       int cnt = 0 ;
       for (int i = 1 ; i <= n ; i++)
       {
        if (x[i])
        {
            cnt++ ;
        }
       }
       if (cnt != 0)
       {
            cout << -1 << endl ;
       }
       else
       {
        int ans = 0;

        for (int i = 1 ; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {

                if (c[i] > c[j])
                    ans++;
            }
        }
        cout << ans << endl ;
       }  
    }
    
    return 0;
}
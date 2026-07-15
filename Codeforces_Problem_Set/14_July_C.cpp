#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x , y ;
        cin >> n >> x >> y ;
        vector<int> p(n+1) ;
        bool ok = true ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> p[i] ;
        }
        int k = __gcd(x,y) ;
        for (int i = 1 ; i <= n ; i++)
        {
        if (abs(p[i] - i) % k != 0)
        {
            ok = false;
            break;
        }
            
        }
        cout << (ok ? "YES" : "NO") << "\n" ;

    }
    
    return 0;
}
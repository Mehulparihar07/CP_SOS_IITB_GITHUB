#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n , m ;
    cin >> n ;
    vector<int> a(n+1) ;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] ;
        a[i] = a[i] + a[i-1] ;
    }
    cin >> m ;
    vector<int> q(m+1) ;
    for (int i = 1 ; i <= m ; i++)
    {
        cin >> q[i] ;
        int low = 1 , high = n , mid ;
        while (high - low > 1)
        {
            mid = (low + high) / 2 ;
            if (a[mid] <= q[i])
            {
                low = mid ;
            }
            else
            {
                high = mid ;
            }
              
        }
    if(a[low] >= q[i]) cout << low << endl ;
    else cout << high << endl ;    
    }
    
    
    return 0;
}
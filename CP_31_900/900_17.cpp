#include<iostream>
#include<vector>
#include <unordered_map>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<long long> a(n+1) ;
        unordered_map<int, int> mp;
        int maximum = INT_MIN ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
            mp[a[i]]++ ;
            maximum = max(maximum , mp[a[i]]) ;
        }
        if (maximum == n)
        {
            cout << 0 << endl ;
        }
        if (maximum == 1 && n != 1)
        {
            for (int i = 1 ;; i++)
            {
                if (pow(2,i) >= n)
                {
                    cout << n - 1 + i << endl ;
                    break ;
                }
                
            }
            
        }
        if (maximum > 1 && maximum != n)
        {

        int clone = 0;
        long long cur = maximum;

        while (cur < n)
        {
              cur *= 2;
              clone++;
        }
           cout << (n - maximum) + clone << endl ;
        }
        
        
        
    }
    

return 0;
}
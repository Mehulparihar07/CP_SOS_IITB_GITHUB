#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n , m ;
        cin >> n >> m ;
        vector<long long> a(n+1) , b(m+1) ;
        long long sum = 0 ;
        
        for (long long i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }
        for (long long i = 1 ; i <= m ; i++)
        {
            cin >> b[i] ;
        }
        sort(b.begin() , b.end()) ;
        vector<bool> sw(n+1 , false) ;
        for (long long i = 1 ; i <= m ; i++)
        {
            sw[b[i]] = true ;
        }
        vector<long long> ans ;
        for (long long i = 1 ; i <= n ; i++)
        {
            if (sw[i])
            {
                sum += a[i] ;
                sum = abs(sum) ;
                ans.push_back(sum) ;
                sum = 0 ;
            }
            else
            {
                sum += a[i] ;
            }
            
        }
        ans.push_back(sum) ;
        sum = 0 ;
        for (int i = 0 ; i < ans.size() ; i++)
        {
            sum += ans[i] ;
        }   
    cout << sum << endl ;
    }
    
    return 0;
}
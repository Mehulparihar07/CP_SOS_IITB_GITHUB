#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , k ; 
        cin >> n >> k ;
        vector<int> a ;
        for (int i = 0 ; i < n ; i++)
        {
            int x ;
            cin >> x ;
            a.push_back(x) ;
        }
        sort(a.begin() , a.end()) ;
        int ans = 0 ;
        int count = 0 ;
        for (int i = 1 ; i < n ; i++)
        {
            if (abs(a[i] - a[i-1]) <= k)
            {
                count++ ;
                ans = max(count , ans) ;
            }
            else
            {
                count = 0 ;
            }
            
        }
    cout << n - ans - 1 << endl ;
    }
    
return 0;
}
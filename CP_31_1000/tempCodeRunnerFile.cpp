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
        vector<int> a(n+1) ;
        vector<pair<int,int>> p(n+1) ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
            p[i].first = a[i] ;
            p[i].second = i ;
        }
        sort(p.begin() + 1 ,p.end()) ;
        sort(a.begin() + 1 , a.end()) ;
        while (a[n] > 0)
        {
            int frequency = upper_bound(a.begin(), a.end(), a[n]) - lower_bound(a.begin(), a.end(), a[n]) ;
            a[n- frequency + 1] -= k ;
            p[n - frequency + 1].first -= k ;
            if (a[n- frequency + 1] <= 0)
            {
               cout << p[n- frequency + 1].second << " " ;
            }
        sort(p.begin() + 1 ,p.end()) ;
        sort(a.begin() + 1 , a.end()) ;   
        }
        
    cout << endl ; 
    }
    
    return 0;
}
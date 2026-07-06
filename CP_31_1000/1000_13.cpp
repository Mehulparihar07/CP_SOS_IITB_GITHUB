#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x ;
        cin >> n >> x ;
        vector<int> a(n) ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        vector<pair<int,int>> v ;
        for (int i = 0 ; i < n ; i++)
        {
            v.push_back({a[i] - x , a[i] + x}) ;
        }
        //sort(v.begin() , v.end()) ;
        int r = v[0].first , s = v[0].second ;
        int changes = 0 ;
        for (int i = 0 ; i < n - 1 ; i++)
        {
            int w = max(r , v[i+1].first) ;
            int z = min(s , v[i+1].second) ;
            if (w > z) {
                changes++;
                r = v[i+1].first;
                s = v[i+1].second;
            } 
            else {
                r = w;
                s = z;
            }   
        }
    cout << changes << endl ;   
    }
    
    return 0;
}
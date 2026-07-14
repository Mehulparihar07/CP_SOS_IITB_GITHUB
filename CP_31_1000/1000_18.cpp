#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long w , h , k , x ;
        cin >> w >> h ;
        vector<pair<long long , long long>> xi , xf , yi , yf ;
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            xi.push_back({x,0}) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            xf.push_back({x,h}) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            yi.push_back({0,x}) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            yf.push_back({w,x}) ;
        }
        for (int i = 0 ; i < 4 ; i++)
        {
            /* code */
        }
        
        
        
    }
    
    return 0;
}
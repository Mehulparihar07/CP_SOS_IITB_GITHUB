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
        long long base_max = xi[xi.size() - 1].first - xi[0].first ;
        bool xin = true , yin = false , xfn = false , yfn = false ;
        if((xf[xf.size() - 1].first - xf[0].first) > base_max){
            base_max = xf[xf.size() - 1].first - xf[0].first ;
            xfn = true ; yfn = false ;
            xin = false ;   yin = false ;
        }
         if((yi[yi.size() - 1].second - yi[0].second) > base_max){
            base_max = yi[yi.size() - 1].second - yi[0].second ;
            yin = true ; xfn = false ;
            xin = false ; yfn = false ;
        }
         if((yf[yf.size() - 1].second - yf[0].second) > base_max){
            base_max = yf[xf.size() - 1].second - yf[0].second ;
            yfn = true ; yin = false ;
            xin = false ; xfn = false ;
        }
        
        
        
        
    }
    
    return 0;
}
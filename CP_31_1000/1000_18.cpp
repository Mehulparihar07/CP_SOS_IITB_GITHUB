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
        vector<long long> xi , xf , yi , yf ;
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            xi.push_back(x) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            xf.push_back(x) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            yi.push_back(x) ;
        }
        cin >> k ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> x ;
            yf.push_back(x) ;
        }
        
        
    }
    
    return 0;
}
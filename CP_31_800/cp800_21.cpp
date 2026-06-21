#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x ;
        int count = 0 ;
        int ans = INT_MIN ;
        cin >> n ;
        vector<int> v ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x ;
            v.push_back(x) ;
            if (x == 0)
            {
               count++ ;
               ans = max(count , ans) ;
            }
            else{
                count = 0 ;
            }
            
        }
        if (ans == INT_MIN)
        {
            cout << "0" << endl ;
        }
        else{
        cout << ans << endl ;
        }

    }
    
return 0;
}
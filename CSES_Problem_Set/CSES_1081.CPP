#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int> x(n+1) ;
    int maximum = INT_MIN ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> x[i] ;
        maximum = max(x[i] , maximum) ;
         
    }
    vector<int> frequencies(maximum + 1) ;
        for (int i = 1; i <= n; i++)
        {
            frequencies[x[i]]++;
        }
    for (int i = maximum ; i >= 1 ; i--)
    {
        int cnt = 0 ;
        for (int multiple = i ; multiple <= maximum ; multiple += i)
        {
            cnt += frequencies[multiple] ;
            if (cnt >= 2)
            {
                cout << i << endl ;
                return 0 ;
            }
    
        }
    
    }

}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
const int N = 1e5 + 10 ;
vector<int> DP(N , -1) ;
vector<int> h(N) ;
int funct(int n , int k){
    int cost = INT_MAX ;
    if(n == 1) return 0 ;
    //if(n == 2) return abs(h[2] - h[1]) ;
    
    if (DP[n] != -1)
    {
        return DP[n] ;
    }
    for (int i = 1 ; i <= k ; i++)
    {
        if (n - i >= 1)
        {      
        cost = min(cost , abs(h[n] - h[n-i]) + funct(n-i,k)) ;
        DP[n] = cost ;
        }
    }
 
return cost ;   
}
int main(){
    int n , k ;
    cin >> n >> k ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> h[i] ;
    }
    
    cout << funct(n,k) << endl ;
    return 0;
}
#include<iostream>
#include <numeric>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int> x(n+1) ;
    int ans = 0 ;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> x[i] ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
       for (int j = i + 1 ; j <= n ; i++)
       {
        /* code */
       }
       
    }
    
    return 0;
}
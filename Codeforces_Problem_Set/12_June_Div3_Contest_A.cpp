#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ; 
        cin >> n ;
        vector<int> h(n+1) ;
        int maximum = INT_MIN ;
        int minimum = INT_MAX ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> h[i] ;
            maximum = max(maximum , h[i]) ;
            minimum = min(minimum , h[i]) ;
        }
    cout << maximum - minimum + 1 << endl ;    
    }
    
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

int t ;
cin >> t ;
int count , maxcount ;

while (t--)
{
    int n , x ;
    cin >> n >> x ;
    vector<int> a(n+2);
    a[0] = 0 ; ;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] ;
        
    }

    a[n+1] = x ;
    int k ;
    k = a[n+1] - a[n] ;
    k = k * 2 ;

    count = 0 ;
    maxcount = INT_MIN ;

    for (int j = 0 ; j < n + 1 ; j++)
    {
        count = a[j+1] - a[j] ;
        maxcount = max(count,maxcount) ;

    }

    if (k > maxcount)
    {
        maxcount = k ;
    }

    cout << maxcount << endl ;
    
    
}



return 0;
}
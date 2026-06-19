#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int> a(n+1) ;
    vector<int> b(n+1) ;
    vector<int> c(n+1) ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> b[i] ;
    }
    map<int,int> mp ;
    for (int i = 1 ; i <= n ; i++)
    {
        mp[a[i]] = i ;
    }
    int k = 0 ;
    for (int j = 1 ; j <= n ; j++)
    {
        if (j == 1)
        {
            c[j] = mp[b[j]] ;
        }
        else
        {
            k = max(k,mp[b[j-1]]) ;
            if (mp[b[j]] > k)
            {
                c[j] = mp[b[j]] - k ;
            }
            
        }
    }
    for (int i = 1 ; i <= n ; i++)
    {
        cout << c[i] << " " ;
    }
    
    cout << endl ;
    

    return 0;
}
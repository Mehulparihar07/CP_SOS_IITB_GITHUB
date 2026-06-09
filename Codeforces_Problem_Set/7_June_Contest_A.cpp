#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int> a(n) ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a.begin(), a.end(), greater<int>()) ;
        bool CSK = true ;
        for (int i = 0 ; i < n - 2 ; i++)
        {
            if (a[i+2] != a[i] % a[i+1])
            {
                CSK = false ;
                break ;
            }
            
        }
        if (!CSK)
        {
           cout << -1 << endl ;
        }
        else
        {
            cout << a[0] << " " << a[1] << endl ;
        }
        

        
    }
    
    return 0;
}
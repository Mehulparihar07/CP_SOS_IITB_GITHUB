#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int k ;
        cin >> k ;
        vector<int> a(k) ;
        int ct_1s = 0 , ct_2s = 0 , diff = 0 ;
        for (int i = 0 ; i < k ; i++)
        {
            cin >> a[i] ;
            if(a[i] == 1) ct_1s++ ;
            else if(a[i] == 2) ct_2s++ ;
            else diff++ ;
        }
        if (diff > 0)
        {
            cout << "YES" << endl ;
            continue ;
        }
        else
        {
            if (ct_2s > 1)
            {
                cout << "YES" << endl ;
                continue ;
            }
        }
    cout << "NO" << endl ;    
    }
    
    return 0;
}
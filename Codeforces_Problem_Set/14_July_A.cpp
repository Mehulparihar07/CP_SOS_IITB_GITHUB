#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int mx_ln = 0 , cnt = 0 ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '#')
            {
                cnt++ ;
            }
            mx_ln = max(mx_ln , cnt) ;
            if (s[i] != '#')
            {
                cnt = 0 ;
            }
               
        }
        if (mx_ln != 0)
        {
            cout << mx_ln / 2 + mx_ln % 2 << endl ;
            continue ;
        }
        
    cout << 0 << endl ;    
    }
    
    return 0;
}
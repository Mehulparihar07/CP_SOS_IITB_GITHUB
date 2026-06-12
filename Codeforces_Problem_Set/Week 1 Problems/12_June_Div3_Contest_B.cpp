#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , k ;
        cin >> n >> k ;
        string s ;
        cin >> s ;

        for (int i = 0 ; i < s.size() ; i++)
        {
            int j = i + k ;
            if (j < s.size() && s[i] == '1' && s[j] == '1')
            {
               s[i] = '0' ;
               s[j] = '0' ;
            }
            if (j < s.size() && s[i] == '1' && s[j] == '0')
            {
            int x = j + k ;
               if (x < s.size() && s[x] == '1')
               {
                s[i] = '0' ;
                s[j] = '1' ;
               }
               
            }
            
        }
        bool csk = true ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '1')
            {
                csk = false ;
            }
            
        }
    if(csk) cout << "YES" << endl ;
    else cout << "NO" << endl ;   
     
    }
    
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        string s ;
        cin >> s ;
        int ct1 = 0 , ct2 = 0 ;
        int m , p ;
        for (int i = 0 ; i < s.size() - 1 ; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b'){
                if (ct1 == 0)
                {
                    m = i ;
                }                   
                ct1++ ;
            }
            if(s[i] == 'b' && s[i+1] == 'a') {
                if (ct2 == 0)
                {
                    p = i ;
                } 
                ct2++ ;
            }
        }
        if (ct1 == ct2)
        {
            cout << s << endl ;
        }
        else if (ct1 > ct2)
        {
            s[m] = 'b' ;
            cout << s << endl ;
        }
        else
        {
            s[p] = 'a' ;
            cout << s << endl ;
        }
        
        
    }
    
    return 0;
}
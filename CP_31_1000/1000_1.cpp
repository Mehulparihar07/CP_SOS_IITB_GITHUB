#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        string s , t ;
        cin >> s ;
        t = s ;
        int ct_0 = 0 , ct_1 = 0 ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '0')
            {
                ct_0++ ;
            }
            else
            {
                ct_1++ ;
            }   
        }
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '0')
            {
                if (ct_1 >= 1)
                {
                    t[i] = '1' ;
                    ct_1-- ;
                }
                else
                {
                    t[i] = '0' ;
                    ct_0-- ;
                }  
            }
            else
            {
                if (ct_0 >= 1)
                {
                    t[i] = '0' ;
                    ct_0-- ;
                }
                else
                {
                    t[i] = '1' ;
                    ct_1-- ;
                }
            }
            
        }
        int i = 0 ;
        int j = 0 ;
        int ans = 0 ;
        while (i < s.size() && j < s.size())
        {
            if (s[i] != t[j])
            {
                // good pair
                i++;
                j++;
            }
            else
            {
                // delete t[j]
                ans++;
                j++;
            }
        }
        
    cout << ans << endl ;    
    }
    
    return 0;
}
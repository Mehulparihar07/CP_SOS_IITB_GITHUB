#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
       long long n ;
       cin >> n ;
       string s = to_string(n) ;
       int ans = 0 ;
       //string m = s ;
       bool csk = true ;
       bool mi = true ;
       bool rcb = true ;
       bool kkr = true ;
       long long x , y , z , w ;
       // last digit - 0 or 5 
       // second last digit - 0 , 2 , 5 , 7
       for (int i = s.size() - 1 ; i >= 0 ; i--)
       {
        if ((s[i] == '0' || s[i] == '5' ) && !csk)
        {
            //y = i ;
            y = i ;
            rcb = false ;
            break ;
            
        }
        if ((s[i] == '0') && csk)
        {
            x = i ;
            csk = false ;
        }
        if ((s[i] == '5') && mi)
        {
            z = i ;
            mi = false ;
        }
         if ((s[i] == '2' || s[i] == '7' ) && !mi)
        {
            //y = i ;
            w = i ;
            kkr = false ;
            break ;   
        }
        
       }

            if (!rcb)
            {
                cout << s.size() - y - 2 << '\n';
            }
            else if (!kkr)
            {
                cout << s.size() - w - 2 << '\n';
            }  
    }
    
    return 0;
}
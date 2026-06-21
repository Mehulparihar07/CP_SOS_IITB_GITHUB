#include<iostream>
#include<string>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    int count , ans ;
    while (t--)
    {
      int n ;
      cin >> n ;
      string s ;
      cin >> s ;
      count = 0 ;
      ans = 0 ;

      for(char i : s){
        if (i == '.')
        {
            count++ ;
            if ((count - ans) == 1 && ans!=0)
            {
                count = 2 ;
                ans = 0 ;
            }
            
        }
        else if (i == '#')
        {
            count = 0 ;
        }
        
        if (count > 2)
        {  
           count = 2 ;
           ans += count ;
        }
        ans += count ;
        
        
      }
       cout << ans << endl ;

    }
    




return 0;
}
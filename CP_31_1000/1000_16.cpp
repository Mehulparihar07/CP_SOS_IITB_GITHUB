#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , r , b ;
        cin >> n >> r >> b ;
        string s = "" ;
        int x = r / (b + 1) ;
        int y = r % ( b + 1 ) ;
        int cnt = 0 , nr = r ;
        while ((cnt != b) || (nr > 0 ))
        {
            for (int i = 0 ; i < x ; i++)
            {
                s += 'R' ;
                nr = nr - 1 ;
            }
            if (y > 0 && nr > 0)
            {
                s += 'R' ;
                nr = nr - 1 ;
                y-- ;
            }  
            if (cnt != b)
            {
                s += 'B' ;
                cnt++ ;
            }
            
        }
        
    cout << s << endl ;    
    }
    
    return 0;
}
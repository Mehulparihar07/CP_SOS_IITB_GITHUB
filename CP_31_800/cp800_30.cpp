#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t , n , x ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        int ans = 0 ;
        for (int k = 0 ; k <= 5; k++)
        {
            for (int d = 1 ; d <= 9 ; d++)
            {
                x = d * pow(10 , k) ;
                if (x <= n)
                {
                    ans++ ;
                }
                
            }
            
        }
        
    cout << ans << endl ;
    }
    
return 0;
}
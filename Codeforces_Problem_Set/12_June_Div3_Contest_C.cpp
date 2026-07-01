#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int a , b , x ;
        cin >> a >> b >> x ;
        int operations1 = 0 , operations2 = 0 ;
        if (a == b)
        {
            cout << 0 << endl ;
        }
        else
        {
            int p , q ;
            int r = a , s = b ;
            while (r != s)
            {
                operations1 += 2 ;
                r /= x ;
                s /= x ;
            }
            
        while (a != b)
            {
        if (a > b)
            {
                p = b + 1 ;
                q = a / x ;
                if (abs(a - p) <= abs(q - b))
                {
                    b = b + 1 ;
                    operations2++ ;
                }
                else
                {
                    a = a / x ;
                    operations2++ ;
                }  
            }
        else
        {
             p = a + 1 ;
                q = b / x ;
                if (abs(b - p) <= abs(q - a))
                {
                    a = a + 1 ;
                    operations2++ ;
                }
                else
                {
                    b = b / x ;
                    operations2++ ;
                }
        }
        
            }
            
        cout << min(operations1 , operations2) << endl ;    
        }
        
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long a , b ;
        cin >> a >> b ;
        while (true)
        {
            if (a >= b)
            {
                a = a - 2 ;
                b = b - 1 ;
            }
            if (b > a )
            {
                b = b - 2 ;
                a = a - 1 ;
            }
            if (a == 0 && b == 0)
            {
                cout << "YES" << endl ;
                break ;
            }
            if (a == 0 || b == 0)
            {
                cout << "NO" << endl ;
                break ;
            }
            
            
            
        }
        
    }
    
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        int netxor = 0 ;
        
        for (int i = 0 ; i < n ; i++)
        {
            int x ;
            cin >> x ;
            netxor ^= x ;
        }
        if (n%2 == 0 && netxor == 0)
        {
            cout << "0" << endl ;
        }
        if (n%2 == 0 && netxor != 0)
        {
            cout << "-1" << endl ;
        }
        if (n%2 == 1)
        {
            cout << netxor << endl ;
        }
        

    }
    
return 0;
}
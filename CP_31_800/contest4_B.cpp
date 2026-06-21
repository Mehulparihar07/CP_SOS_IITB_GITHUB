#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int t ;
    cin >> t ;

    while(t--) {

        int n, x1, x2, k ;
        cin >> n >> x1 >> x2 >> k ;

        int d = abs(x1 - x2) ;

        d = min(d, n - d) ;
        if (n <= 3 )
        {
            cout << "1" << endl ;
        }
    
        else{
        cout << d + k << endl ;
    }
    }

    return 0 ;
}
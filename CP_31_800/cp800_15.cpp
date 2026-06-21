#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n ;
        cin >> n ;
        long long sum = 0 ;   // changed to long long
        bool w = false ;

        vector<long long> a(n) ;

        for(int i = 0 ; i < n ; i++) {
            cin >> a[i] ;
            sum += a[i] ;
        }

        vector<long long> pref(n);

        pref[0] = a[0];   

        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + a[i];
        }

        for (int i = 0 ; i < n ; i++)
        {
            long long x = sum - pref[i];   // better as long long

            if ((pref[i]%2 == 0) && (x%2 == 0))
            {
                w = true ;
                cout << "Yes" << endl ;
                break ;
            }
            else if ((pref[i]%2 == 1) && (x%2 == 1))
            {
                w = true ;
                cout << "Yes" << endl ;
                break ;
            }
        }

        if (w == false)   // fixed
        {
           cout << "No" << endl ;
        }
    }

    return 0;
}
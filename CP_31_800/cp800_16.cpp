#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        long long n , x , k ;
        cin >> n ; 
        bool w = false ;
        long long diff ;
        long long min_diff = LLONG_MAX ;
        long long operations = 0 ;

        vector<long long> a(n) ;

        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];

            if (i != 0 && a[i] < a[i-1])
            {   
                w = true ;
            }

            if (i != 0)
            {   
                diff = a[i] - a[i-1] ;
                if (diff < min_diff)
                {
                    min_diff = diff ;
                    k = i ;
                }
            }
        } 

        if (w)
        {
            cout << 0 << endl;
        }
        else
        {
            operations = min_diff/2 + 1;
            cout << operations << endl;
        }

    }

    return 0;
}
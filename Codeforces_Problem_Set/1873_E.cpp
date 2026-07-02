#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;

    while (t--)
    {
       long long n , x ;
       cin >> n >> x ;

       vector<long long> a(n+1) ;

       for (long long i = 1 ; i <= n ; i++)
       {
            cin >> a[i] ;
       }

       long long low = 1 , high = 1e18 , mid ;   // Change 1

       while (high - low > 1)
       {
            mid = (low + high)/2 ;

            long long mika = 0 ;

            for (long long i = 1 ; i <= n ; i++)
            {
                if (mid > a[i])
                {
                    mika += (mid - a[i]);

                    if(mika > x) break;   // Change 2
                }
            }

            if (mika <= x)
            {
                low = mid ;
            }
            else
            {
                high = mid ;
            }
       }

       cout << low << endl ;
    }

    return 0;
}
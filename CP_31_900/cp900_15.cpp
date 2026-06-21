#include<iostream>
#include<vector>
using namespace std ;

int operations(vector<long long> &a){

    int count = 0 ;

    for (int i = a.size() - 2 ; i >= 1 ; i--)
    {
        while (a[i] >= a[i+1])
        {
            a[i] = a[i] / 2 ;
            count++ ;

            if (a[i] == 0 && a[i] >= a[i+1])
            {
                return -1 ;
            }
        }
    }

    return count ;
}

bool check(vector<long long> a){

    for (int i = 1 ; i < a.size() - 1 ; i++)
    {
        if (a[i] >= a[i+1])
        {
            return false ;
        }
    }

    return true ;
}

int main(){

    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;

        vector<long long> a(n+1) ;

        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }

        int ans = operations(a) ;

        if (ans == -1)
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << ans << endl ;
        }
    }

    return 0;
}
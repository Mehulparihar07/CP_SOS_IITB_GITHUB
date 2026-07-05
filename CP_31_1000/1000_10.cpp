#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ; char c ;
        cin >> n >> c ;
        string s , x ;
        cin >> s ;

        if(c=='g'){
            cout << 0 << endl ;
            continue ; 
        }

        x = s + s ;

        int j = x.size() - 1 ;
        int p , q , ans = 0 ;

        while (x[j] != 'g')
            j--;

        p = j ;
        j-- ;

        while (j >= 0)
        {
            if (x[j] == c && j < n)
            {
                q = j ;
                ans = max(ans , p - q) ;
            }
            if (x[j] == 'g')
                p = j ;

            j-- ;
        }

        cout << ans << endl ;
    }

    return 0 ;
}
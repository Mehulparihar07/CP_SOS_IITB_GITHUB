#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool operations (vector<int> &v , int n){

    int sum = 0 ;
    int fac = 1 ;
    for (int i = 0 ; i < n ; i++)
    {
        sum += v[i] ;
        fac *= v[i] ;
    }
    if (sum >= 0 && fac == 1)
    {
        return true ;
    }
    return false ;
}

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {   
       int ans = 0 ;
       vector<int> v ;
       int n , x ;
       cin >> n ;
       for (int i = 0 ; i < n ; i++)
       {
            cin >> x ;
            v.push_back(x) ;
       }

       while (true)
       {
        if (operations(v , n))
       {
        cout << ans << endl ;
        break ;
       }
       else{

        bool changed = false;

        for (int i = 0 ; i < n ; i++)
        {
            if (v[i] == -1)
            {
                v[i] = 1;   // fixed here
                ans ++ ;
                changed = true;
                break ;
            }      
        }

        if(!changed)   // if no -1 left, flip a 1
        {
            v[0] = -1;
            ans++;
        }

       }

       }     
    }

return 0;
}
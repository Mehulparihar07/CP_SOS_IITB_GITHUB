#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std ;

int rdj(vector<int> a , int k){

    int n = a.size() ;
    int x = 0 ;
    int y = 0 ;
    for (int i = 0 ; i < k ; i++)
    {
        if (a[i] == 2)
        {
            x++ ;
        }
        
    }
    
    for (int i = k ; i < n ; i++)
    {
       if (a[i] == 2)
       {
        y++ ;
       }
       
    }

    if (x == y)
    {
        return k ;
    }
return -1 ;
}

int main () {
    int t ;
    cin >> t ;
    while (t--)
    {
        bool CSK = true ;
        int n , x ;
        cin >> n ;
        vector<int> a ;
        for (int i = 0 ; i < n ; i++)
        {
           cin >> x ;
           a.push_back(x) ;
        }

        for (int k  = 1 ; k < n ; k++)
        {
            if ((rdj(a , k) != -1 ))
            {
                CSK = false ;
                cout << k  << endl ;
                break ;
            }
            
        }
        
        if (CSK == true)
        {
            cout << "-1" << endl ;
        } 
    }
    return 0 ;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x ;
        cin >> n ;
        int count = 0 ;
        vector<int> a ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x ;
            a.push_back(x) ;
            if (i >= 1)
            {
                if (((a[i-1] % 2 == 0 ) && (a[i] % 2 == 0 )) || ((a[i-1] % 2 == 1 ) && (a[i] % 2 == 1 )))
                {
                    count ++ ;
                }
                
            }
            
        }
        cout << count << endl ;
    }
    
return 0;
}
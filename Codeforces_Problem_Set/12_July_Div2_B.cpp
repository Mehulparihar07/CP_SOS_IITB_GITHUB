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
        vector<long long> a ;
        a.push_back(1) ;
        a.push_back(2) ;
        a.push_back(3) ;
        long long s = 6 ;
        if(n == 1) cout << 1 << endl ;
        else if(n == 2) cout << -1 << endl ;
        else
        {
            while (a.size() != n)
            {
                a.push_back(s) ;
                s += s ;
            }
            for (int i = 0 ; i < a.size() ; i++)
            {
                cout << a[i] << " " ;
            }
        cout << endl ;        
        }
        

    }
    
    return 0;
}
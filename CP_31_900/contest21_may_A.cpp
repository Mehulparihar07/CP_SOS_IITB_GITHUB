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
        vector<int> a(n+1) ;
        int x = 1 ;
        for (int i = 1 ; i <= n ; i++)
        {
            a[i] = x ;
            x = x + 2 ;
            cout << a[i] << " " ;
        }
    cout << endl ;    
    }
    

return 0;
}
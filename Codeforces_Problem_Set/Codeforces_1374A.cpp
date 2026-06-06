#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long x , y , n ;
        cin >> x >> y >> n ;
        long long num = (n - y) / x ;
        cout << x*num + y << endl ;
        
    }
    
    return 0;
}
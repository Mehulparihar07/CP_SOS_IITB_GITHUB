#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int a , b , c , d ;
        cin >> a >> b >> c >> d ;
        if ((d >= b) && (a + (d-b)) >= c) 
        {
            cout << 2*(d-b) + (a-c) << endl ;
        }
        else{
            cout << "-1" << endl ;
        }
        
    }
    
return 0;
}
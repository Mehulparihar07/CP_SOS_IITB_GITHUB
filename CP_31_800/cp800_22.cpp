#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , k ;
        cin >> n >> k ;
        if ((k == 1) || (n%2 == 0 && k%2 == 0) || (n%2 == 1 && k%2 == 1))
        {
            cout << "Yes" << endl ;
        }
        else{
            cout << "No" << endl ;
        }
    
    }
    
return 0;
}
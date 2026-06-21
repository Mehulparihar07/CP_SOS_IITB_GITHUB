#include<iostream>
using namespace std;

int main(){
    int t ; 
    cin >> t ;
    while (t--)
    {
        long long n ;
        cin >> n ;
        int count = 0 ;
        bool mehul = true ;
        if (n % 2 == 1)
        {
           cout << "1" << endl ;
           mehul = false ;
        }
        int i = 1 ;
        while (n % i == 0)
        {
            count++ ;
            i++ ;
        }
        
        if (mehul)
        {
            cout << count << endl ;
        }
        
    
    }
    
return 0;
}
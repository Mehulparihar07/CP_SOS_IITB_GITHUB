#include<iostream>
using namespace std;

long long binemultiply(long long a , long long b , long long M = 1e18 + 7){
    long long ans = 0 ;
    while (b > 0)
    {
        if (b & 1)
        {
           ans = (ans + a) % M ;
        }
    a = (a + a) % M ;
    b >>= 1 ;
    }
    
}
void binary(int num){

    for (int i = 10 ; i >= 0; i--)
    {
        cout << ((num >> i) & 1) ;
    }
cout << endl ;    
}
int main(){

    //binary(5) ;
    // set - 1 and unset - 0 ;
    binary(9) ;
    int a = 9 ;
    int i = 2 ;
    if ((a & (1 << i)))
    {
       cout << "Set" << endl ;
    }
    else
    {
        cout << "Unset" << endl ;
    }
    
    binary(a | 1 << i) ; // convert to set
    binary(a & (~(1 << i))) ;  // convert to unset 
    binary(a ^ (1 << i)) ;

    return 0;
}


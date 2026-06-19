#include<iostream>
using namespace std;

long long a_grater_than_b(long long a , long long b , long long x){
    long long operations = 0 ; 
    long long i , j , k ;
    i = a - b ;
    j = a / x  - b ;
    k = a - b - 1 ;
    if(a == b){
        return operations ;
    }
    if(abs(i-j) <= abs(i-k)){
        a = a / x ;
        operations++ ;
        a_grater_than_b(a , b , x) ;
    }
    else{
        b = b + 1 ;
        operations++ ;
        a_grater_than_b( a , b , x) ;
    }  

}
long long a_less_than_b(long long a , long long b , long long x){
    long long operations = 0 ; 
    long long i , j , k ;
    i = b - a ;
    j = b / x  - a ;
    k = b - a - 1 ;
    if(a == b){
        return operations ;
    }
    if(abs(i-j) <= abs(i-k)){
        b = b / x ;
        operations++ ;
        a_less_than_b(a , b , x) ;
    }
    else{
        a = a + 1 ;
        operations++ ;
        a_less_than_b( a , b , x) ;
    } 
}
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long a , b , x ;
        cin >> a >> b >> x ;
        if (a == b)
        {
            cout << 0 << endl ;
        }
        if (a != b && a > b)
        {
            cout << a_grater_than_b(a , b , x) << endl ;
        }
        if (a != b && b > a)
        {
            cout << a_less_than_b(a , b , x) << endl ;
        }
        
        

    }
    
    return 0;
}
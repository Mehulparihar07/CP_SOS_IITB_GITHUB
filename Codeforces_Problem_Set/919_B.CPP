#include<iostream>
using namespace std;

int sum_of_digits(int n){
    int sum = 0 ;
    while (n > 0)
    {
       sum += n % 10 ;
       n /= 10 ;
    }
return sum ;    
}
int main(){
    int k ;
    cin >> k ;
    //int m = 19 ;
    int count = 0 ;
    for(int i = 19 ; ; i++){
        if(sum_of_digits(i) == 10){
            count++;
        }
        if(count == k){
            cout << i ;
            break ;
        }
    }
    return 0;
}
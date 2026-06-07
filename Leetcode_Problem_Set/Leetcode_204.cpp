#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
    //const long long N = 1e7 + 10 ;  
    vector<bool> isPrime(n,1);
   // vector<int> hp(N,0) , lp(N,0) ;
   int ans = 0 ;
    for (int i = 2 ; i < n ; i++)
    {
    isPrime[0] = isPrime[1] = 0 ;
    if(isPrime[i]){
       // hp[i] = lp[i] = i ;
        for (int j = 2 * i ; j < n ; j += i)
        {
            isPrime[j] = false ;
            //hp[j] = i 
        }
    }
    }
    if(n == 0 || n == 1) return 0 ;
    for(int i = 2 ; i < n ; i++){
        if(isPrime[i]){
            ans++ ;
        }
    }
    return ans ;
    }
};
int main(){
    return 0;
}
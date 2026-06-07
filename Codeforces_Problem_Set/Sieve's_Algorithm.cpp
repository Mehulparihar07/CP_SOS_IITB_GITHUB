/* Core Insight Sieve Used

Instead of asking "is N divisible by anything?" for each number
Flip it → "mark all multiples of i as composite" once 😎😎 */
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    const long long N = 1e7 + 10 ;  
    vector<bool> isPrime(N,1);
    vector<int> hp(N,0) , lp(N,0) ;
    for (int i = 2 ; i < N ; i++)
    {
    isPrime[0] = isPrime[1] = 0 ;
    if(isPrime[i]){
        hp[i] = lp[i] = i ;
        for (int j = 2 * i ; j < N ; j += i)
        {
            isPrime[j] = false ;
            hp[j] = i ;
            if (lp[j] == 0)
            {
                lp[j] = i ;
            }
            
        }
    }
    }
    
    return 0;
}
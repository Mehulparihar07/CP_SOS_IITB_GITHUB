#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int K = 1e6 ;
    vector<bool> isPrime(K,1) ;
    isPrime[0] = isPrime[1] = 0 ;
    for (int i = 2 ; i < K ; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i ; j < K; j += i)
            {
                isPrime[j] = false ;
            }
            
        }
        
    }
    int N , Q , x ;
    cin >> N >> Q ;
    vector<int> A(N+1) ;
    vector<int> prime_numbers ;
    for (int i = 1 ; i <= N; i++)
    {
        cin >> A[i] ;
        if (isPrime[A[i]])
        {
            prime_numbers.push_back(A[i]) ;
        }
        
    }
  
    while (Q--)
    {
        cin >> x ;
        if (prime_numbers.size() )
        {
            /* code */
        }
        

    }
    
    
    return 0;
}
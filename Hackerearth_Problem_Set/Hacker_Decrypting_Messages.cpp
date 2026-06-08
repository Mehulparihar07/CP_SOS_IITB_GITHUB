#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


int main(){
    const int K = 1e6 + 7 ;
    vector<bool> isPrime(K,1) ;
    isPrime[0] = isPrime[1] = 0 ;
    vector<int> hp(K,0) , lp(K,0) ;
    for (int i = 2 ; i < K ; i++)
    {
        if (isPrime[i])
        {
            hp[i] = lp[i] = i ;
            for (int j = 2 * i ; j < K; j += i)
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
    int N , Q ;
    cin >> N >> Q ;
    vector<int> A(N+1) ;
    vector<int> X(Q+1) ;
    for (int i = 1 ; i <= N; i++)
    {
        cin >> A[i] ;
        
    }
    for (int i = 1 ; i <= N ; i++)
    {
        cin >> X[i] ;
    }
    
    vector<int> prime_numbers ;

    for (int i = 1 ; i <= Q ; i++)
    {
        int num = X[i] ;
        while (num > 1)
        {
            int prime_factor = hp[num] ;
            num /= hp[num] ;
            prime_numbers.push_back(hp[num]) ;
        }
    }

    prime_numbers.erase(unique(prime_numbers.begin(), prime_numbers.end()), prime_numbers.end()) ;
    for(int i = 1 ; i <= Q ; i++){
        for (int j = 0 ; j < prime_numbers.size() - 1 ; j++)
    {
        int product = prime_numbers[j] * prime_numbers[j+1] ;
        if ((find(prime_numbers.begin() , prime_numbers.end() , X[i] / product) != prime_numbers.end()) )
        {
            
        }
        
        
    }
    
}
    
    return 0;
}
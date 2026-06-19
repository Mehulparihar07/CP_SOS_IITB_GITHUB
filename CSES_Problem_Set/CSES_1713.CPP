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

    int n ;
    cin >> n ;

    vector<int> v(n+1) ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> v[i] ;
    }

    for (int i = 1 ; i <= n ; i++)
    {
        int num = v[i] ;
        map<int,int> mp ;

        while (num > 1)
        {
            int prime_factor = hp[num];
            mp[prime_factor]++;
            num /= prime_factor;
        }

        int ans = 1 ;
        for (auto it : mp)
        {
            ans *= (it.second + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
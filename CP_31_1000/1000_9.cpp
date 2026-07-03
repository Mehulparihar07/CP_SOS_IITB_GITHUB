#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n ;
        cin >> n ;
        set<long long> st ;
        for (int i = 1 ; i * i <= n ; i++)
        {
            if (n % i == 0)
            {
                st.insert(i) ;
                st.insert(n / i) ;
            }    
        }
        long long ans_A = 1 , ans_B = 1 ;
        for(auto x : st){
            if (x >= n)
            {
               break ;
            }
            else
            {
                if ((n - x) % x == 0)
                {
                    ans_A = x ;
                    ans_B = n - x ;
                }
                
            }
            
            
        }
    cout << ans_A << " " << ans_B << endl ;    
    }
    

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long binexp(long long a,long long b,long long mod)
{
    long long ans=1;
    a%=mod;

    while(b)
    {
        if(b&1)
            {ans=(ans*a)%mod;}

        a=(a*a)%mod;
        b>>=1;
    }

    return ans;
}
    int superPow(int a, vector<int>& b) {
        int m = b.size() - 1 ;
        long long result = 0 ;
        for(int i = 0 ; i < b.size() ; i++){
           result += b[i] * binexp(10,m,1140)  ;
           m-- ;
        }
    return binexp(a,result,1337) ;    
    }
};
int main(){

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int power(int a , int b){
    int k = 0 ;
    while (a != 0)
    {
        a = a/b ;
        k++ ;
    }
return k ;    
}
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int a , b ;
        cin >> a >> b ;
        int operations = 0 ;
        if(b == 1){
            b += 1 ;
            operations++ ;
        }
        if (b > a)
        {
            cout << 1 + operations << endl ;
            continue ;
        }
        //int x = b ;
        int mcnt = INT_MAX , curr = 0 ;
        for (int i = b ; i <= b + 30 ; i++)
        {
            curr = power(a , i) ;
            mcnt = min(mcnt , curr + i - b) ;
        }
    cout << mcnt + operations << endl ;    
    }
    
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        string s ;
        cin >> s ;
        string ans = "" ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            ans += 'b' ;
        }
    cout << ans << endl ;
    }
    
    return 0;
}
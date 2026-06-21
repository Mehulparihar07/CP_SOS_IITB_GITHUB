#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        vector<int> a ;
        int ans = 0 ;
        int count1 = 0 ;
        int count2 = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
            if (s[i] == '<' )
            {
                count1++ ;
                ans = max(ans, max(count1, count2)) ;
                count2 = 0 ;
            }
            if (s[i] == '>' )
            {
                count2++ ;
                ans = max(ans, max(count1, count2)) ;
                count1 = 0 ;
            }
            
        }
    cout << ans + 1 << endl ; 
    }
    
return 0;
}
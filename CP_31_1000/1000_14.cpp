#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int> s(n+1) ;
        //int cnt = 1 ;
        map<int,int> mp ;
        bool mika = true ;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> s[i] ;
            mp[s[i]]++ ;
        }
        for(auto x : mp){
            if (x.second < 2)
            {
                mika = false ;
                break ;
            }    
        }
        if (!mika)
        {
            cout << -1 << endl ;
        }
        else
        {
            for (int i = 1 ; i <= n ; i++)
            {
                
                if ((i - mp[s[i]] + 1 > 0) && s[i - mp[s[i]] + 1] == s[i])
                {
                    cout << i - mp[s[i]] + 1 << " " ;
                }
                else
                {
                    cout << i + 1 << " " ;
                    
                }
                
                
            }
        cout << endl ;       
        }
            
        }
        
        
        return 0;
    }
    
    

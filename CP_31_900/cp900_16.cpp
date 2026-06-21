#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    while (n--)
    {
        string s , t ;
        cin >> s >> t ;
        if (t.size() > s.size())
        {
            cout << "NO" << endl ;
        }
        else
        {
            string ans = "";

        for(char ch : s) {
            if(t.find(ch) != string::npos) {
             ans += ch;
             }
            }
        unordered_map<char, int> freq ;

        for(char ch : ans)
        {
            freq[ch]++ ;
        }
        if (ans.size() >= t.size())
        {
            
            
            
        }
        else
        {
            cout << "NO" << endl ; 
        }
        
        
         
        }
        
        
    }
    
return 0;
}
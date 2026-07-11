#include<iostream>
#include<vector>
using namespace std;

string rev_Str(int i , int j , string s){
    if(i >= j) return s ;
    swap(s[i] , s[j]) ;
    return rev_Str(i + 1 , j - 1 , s) ;

}

int main(){
    string s ;
    cin >> s ;
    if (rev_Str(0 , s.size() - 1 , s) == s)
    {
        cout << "YES" << endl ;
        return 0 ;
    }
        cout << "NO" << endl ;
    
    
    return 0;
}
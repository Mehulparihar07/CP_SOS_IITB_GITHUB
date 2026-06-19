#include<iostream>
using namespace std;
 
int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        bool CSK = true ;
        for (int i = 0 ; i < n ; i++)
        {
            int x ;
            cin >> x ;
            if(x == 67){
                
                CSK = false ;
                
            }
 
        }
            cout << (CSK ? "NO" : "YES") << endl ;
    }
    
    return 0;
}
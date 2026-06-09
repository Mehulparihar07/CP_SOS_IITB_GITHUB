#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int> even ;
        vector<int> odd ;
        for (int i = 1 ; i <= n ; i++)
        {
            if(i % 2 == 1) odd.push_back(i) ;
            else even.push_back(i) ;
        }
        // int x = 2 * (even.size() + odd.size()) ;
        for(int x : even){
            cout << x << " " ;
        }
        for(int x : odd){
            cout << x << " " ;
        }
        for(int x : even){
            cout << x << " " ;
        }
        for(int x : odd){
            cout << x << " " ;
        }
        for(int x : odd){
            cout << x << " " ;
        }
        for(int x : even){
            cout << x << " " ;
        }
        for(int x : even){
            cout << x << " " ;
        }
        for(int x : odd){
            cout << x << " " ;
        }
        
    cout << endl ;    
        
       
    }
    
    return 0;
}
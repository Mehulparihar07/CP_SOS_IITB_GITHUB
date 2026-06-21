#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n , k , x ;
        cin >> n >> k >> x ;  
        vector<long long> a ;
        bool c = false ;
        int w = 1 ;

       while (a.size() < k - 1)
       {

        if (w != x)
        {
           a.push_back(w) ;
        }
        w++ ;
        
       }
       
        

        if (x != 1)
        {   
            c = true ;
            cout << "Yes" << endl ;
            cout << n << endl ;
            for (int i = 0 ; i < n ; i++)
            {
                cout << "1" << " " ;
            }
            
        }
        if(c == false){
        auto it = find(a.begin(), a.end(), 1) ;
        if(it != a.end()){
            cout << "No" << endl ;
        }
        auto it1 = find(a.begin(), a.end(), 2) ;
        auto it2 = find(a.begin(), a.end(), 3) ;
        if (it1 != a.end() || it2 != a.end())
        {
           if (n%2 == 0)
           {
            cout << "Yes" << endl ;
            cout << n/2 << endl ;
            for (int i = 0 ; i < n/2 ; i++)
            {
                cout << "2" << " " ;
            }
           } 
           if (n%2 == 1)
           {
                cout << "Yes" << endl ;
                cout << n/2 + 1 << endl ;
                cout << "3" << " " ;
                for (int i = 0 ; i < n/2 - 1 ; i++)
                {
                    cout << "2" << " " ;
                } 
                }
                else{
                    cout << "No" << endl ;
                }
            } 
        }
                }

    return 0;
}
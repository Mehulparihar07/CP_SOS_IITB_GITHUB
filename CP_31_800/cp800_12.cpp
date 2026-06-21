#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int t ;
    cin >> t ;

    while (t--)
    {
       int n , x ;
       cin >> n ;

       vector<int> v ;

       for (int i = 0 ; i < n ; i++)
       {
        cin >> x ;

        if(i!=0 && x < v.back())   // check decrease
        {
            v.push_back(x);        // extra element
        }

        v.push_back(x);            // actual element
       }

       cout << v.size() << endl ;

       for(int h : v){
        cout << h << " ";
       }

       cout << endl ;
    }
    
return 0;
}
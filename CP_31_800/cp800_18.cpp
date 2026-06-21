#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int x , k ;
        cin >> x >> k ;
        vector<int> a ;
        if (k > x)
        {
            cout << "1" << endl ;
            cout << x << endl ;
        }
        else{
            int j = 1 ;
            while (j <= x)
            {
                if (j%k != 0)
                {
                    a.push_back(j) ;
                }
                j++ ;
            }
            
            auto it = find(a.begin() , a.end() , x) ;
            if (it != a.end())
            {
                cout << "1" << endl ;
                cout << x << endl ;
            }
            else{
                cout << "2" << endl ;
                cout << a[a.size() - 1] << " " << a[0] << endl ;

            }
            
            
        }
        
    }
    
return 0;
}
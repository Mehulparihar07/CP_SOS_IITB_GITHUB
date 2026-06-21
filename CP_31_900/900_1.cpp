#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int a , b , xk , yk , xq , yq;

        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        int ans = 0;

        set<pair<int,int>> p = {
            {a,b},
            {a,-b},
            {-a,b},
            {-a,-b},
            {b,a},
            {-b,a},
            {b,-a},
            {-b,-a}
        };

        for(auto i : p){

            for(auto j : p){

                int m , n , x , y;

                m = xk - i.first;
                n = xq - j.first;

                x = yk - i.second;
                y = yq - j.second;

                if(m == n && x == y){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
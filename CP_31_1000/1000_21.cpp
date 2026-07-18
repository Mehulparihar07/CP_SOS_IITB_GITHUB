#include<iostream>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        string a , b ;
        cin >> a >> b ;
        int ans = 0;

        for (int i = 0; i < a.size(); i++) {
            string cur = "";
            for (int j = i; j < a.size(); j++) {
                cur += a[j];
                if (b.find(cur) != string::npos)
                    ans = max(ans, (int)cur.size());
            }
        } 
    cout << a.size() + b.size() - 2*ans << endl ;
    }
    
    return 0;
}
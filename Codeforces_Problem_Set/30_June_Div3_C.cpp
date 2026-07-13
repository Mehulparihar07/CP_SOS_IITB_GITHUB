#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        bool has01 = false, has10 = false;

        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == '0' && s[i + 1] == '1') has01 = true;
            if (s[i] == '1' && s[i + 1] == '0') has10 = true;
        }

        if (count(s.begin(), s.end(), '0') == 0 ||
            count(s.begin(), s.end(), '1') == 0)
            cout << 1 << '\n';
        else if (has01 && has10)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
            }
    
    return 0;
}
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--)
    {
        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char,int> m;

        for(char ch : s)
        {
            m[ch]++;
        }

        int odd = 0;

        for(auto it : m)
        {
            if(it.second % 2 == 1)
            {
                odd++;
            }
        }

        if(k >= odd - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
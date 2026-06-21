#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> b;
        vector<long long> c;

       for (int i = 0 ; i < n ; i++)
       {
        if (i == 0)
        {
            b.push_back(a[0]) ;
        }
            if (b[0]%a[i] != 0)
        {
            c.push_back(a[i]) ;
        }   

       }
       if (c.size() == 0)
       {
        cout << "-1" << endl ;
       }
       
        if(c.size() != 0){

        cout << b.size() << " " << c.size() << endl;

        for(int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;

        for(int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    }

    return 0;
}
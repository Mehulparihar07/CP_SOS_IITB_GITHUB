#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool ok = false;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(a[i], a[j]) <= 2){
                    ok = true;
                }
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
}
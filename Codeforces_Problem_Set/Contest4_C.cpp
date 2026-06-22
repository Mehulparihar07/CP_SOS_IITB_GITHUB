#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std ;

int best (int m , vector<int> v){

    if(find(v.begin(), v.end(), m) != v.end())
    {
        return m ;
    }

    if (m - v[v.size() - 1] > 0)
    {
        return v[v.size() - 1] ;
    }

    if (m - v[v.size() - 1] < 0)
    {
        return v[0] ;
    }

    return m ;
}

int main(){

    int t ;
    cin >> t ;

    while (t--)
    {
        int a , n ;
        cin >> a >> n ;

        vector<int> d ;

        for (int i = 0 ; i < n ; i++)
        {
            int x ;
            cin >> x ;
            d.push_back(x) ;
        }

        int number_of_digits_of_a = 0 ;

        int w = a ;

        while (a != 0)
        {
            number_of_digits_of_a++ ;

            a = a / 10 ;
        }

        int k = pow(10,number_of_digits_of_a - 1) ;

        int z = 0 ;

        string s = to_string(w);

        for(int i = 0 ; i < s.length() ; i++)
        {
            z += best(s[i] - '0' , d) * k ;

            k = k / 10 ;
        }

        cout << abs(w - z) << endl ;
    }

    return 0;
}
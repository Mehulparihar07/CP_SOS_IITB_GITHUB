#include<iostream>
#include <climits>
using namespace std;

int main(){

int N , x ;
cin >> N ;
int arr[N] ;
int smallest = INT_MAX ; 
int count ;
for (int i = 0 ; i < N ; i++)
{
    cin >> arr[i] ;
    if (arr[i] < 0)
    {
        x = arr[i] ;
        arr[i] = abs(x) ;
    }
    
    count = arr[i] ;
    smallest = min(smallest,count) ;
}

cout << abs(smallest) << endl ;


return 0;
}
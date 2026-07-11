#include<iostream>
#include<vector>
using namespace std;

vector<int> rev_Array(int i , int j , vector<int> v){
    if(i >= j) return v ;
    swap(v[i] , v[j]) ;
    return rev_Array(i + 1 , j - 1 , v) ;

}

int main(){
    vector<int> v = {1,2,3,4,5,6,7} ;
    rev_Array(0 , v.size() - 1 , v) ;
    for (int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << " " ;
    }
    
    return 0;
}
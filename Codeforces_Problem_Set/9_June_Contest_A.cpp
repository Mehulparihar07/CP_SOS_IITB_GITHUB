#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while (t--)
    {
        int n , x , y , z ;
        cin >> n >> x >> y >> z ;
        int case_1 , case_2 ;
        case_1 = case_2 = INT_MAX ;
        if ((n % (x + y)) == 0)
        {
            case_1 = n / (x+y) ;
        }
        if ((n % (x + y)) != 0)
        {
            case_1 = ( n / (x+y)) + 1 ;
        }
        if ((n - (z*x)) <= 0 )
        {
            case_2 = z ;
        }
        if ((n - (z*x)) > 0)
        {
            if (((n - (z*x)) % (x + (10*y))) == 0)
            {
                case_2 = ((n - (z*x)) / (x + (10*y))) + z ;
            }
            else
            {
                case_2 = ((n - (z*x)) / (x + (10*y))) + 1 + z ;
            }
            
            
        }
    cout << min(case_1 , case_2) << endl ;
        
    }
    
    return 0;
}
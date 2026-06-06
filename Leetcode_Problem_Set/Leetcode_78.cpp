#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        int subsets_ct = 1 << nums.size() ;
        vector<vector<int>> subsets ;

        for(int i = 0 ; i < subsets_ct ; i++){
            vector<int> subset ;
            for(int j = 0 ; j < nums.size() ; j++){
                if((i & (1 << j)) != 0){
                    subset.push_back(nums[j]) ;
                }
            }
        subsets.push_back(subset) ;
        }
    return subsets ;    
    }
};
int main(){
    return 0;
}
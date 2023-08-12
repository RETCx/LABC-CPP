#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int  i = 0 , j = 0 ;
        for(i; i < nums.size() ; i++){
            for(j = i + 1; j < nums.size() ; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        } 
        return {} ;
    }
};

int main(){
    vector<int> vec = {3,2,4};

    Solution x ;
    x.twoSum(vec,6);

}
#include "bits/stdc++.h"
using namespace std;

int main(){
    
class Solution {
public:
    void subset(vector<int> &nums, vector<vector<int>> &ans, vector<int> output, int i ){
        //base cond
        if(i >= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        subset(nums , ans , output , i + 1);

        //include
        output.push_back(nums[i]);
        subset(nums , ans , output , i + 1);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i =0;
        subset(nums , ans , output , i);
        return ans;
    }
};
    
}
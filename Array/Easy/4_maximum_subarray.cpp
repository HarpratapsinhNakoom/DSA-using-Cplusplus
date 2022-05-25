// https://leetcode.com/problems/maximum-subarray/

//Kadane's ALGORITHM

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = 0;
        int ans = nums[0];
        for(int i = 0 ; i < nums.size() ; i++) {
            if(temp <= 0) {
                temp = 0;
            }
            
            temp += nums[i];
            
            if(temp > ans) {
                ans = temp;
            }
        }
        
        
        return ans;
    }
};

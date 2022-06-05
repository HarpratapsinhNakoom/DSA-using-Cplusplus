// https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++) {
            ans = max(ans, nums[i]);
        }
        
        pair<int , int> temp;
        temp.first = temp.second = 1;
        
        for(int i = 0 ; i < nums.size() ; i++) {
            
            int t = temp.first * nums[i];
            temp.first = max(nums[i] , max(nums[i]*temp.first , nums[i]*temp.second));
            temp.second = min(nums[i] , min(t , nums[i]*temp.second));
            
            ans = max(ans , temp.first);
        }
        
        return ans;
    }
};

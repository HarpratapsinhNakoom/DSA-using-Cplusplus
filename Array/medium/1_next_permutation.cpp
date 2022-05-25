

//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = nums.size() - 1 ;
        for(; index > 0 ; index--) {
            if(nums[index - 1] < nums[index]) {
                // swap (nums[index - 1] , nums[index]);
                break;
            }
            if(index == 1) {
                index = 0;
                break;
            }
        }
        
        if(index == 0) {
            sort(nums.begin() , nums.end());
            return;
        }
        
        int temp = INT_MAX;
        int swapindex = 0;
        for(int i = nums.size() - 1 ; i >= index; i--) {
            if(nums[i] > nums[index - 1] and nums[i] < temp) {
                temp = nums[i];
                swapindex = i;
            }
        }
        
        swap(nums[index - 1] , nums[swapindex]);
        
        sort(nums.begin() +index , nums.end());
        
    }
};

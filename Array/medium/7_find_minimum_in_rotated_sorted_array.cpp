//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        
        // cout<<"All good"<<endl;
        if(nums[s] > nums[e]) {
            // cout<<"OK good"<<endl;
            while(s < e) {
                int mid = s + (e - s)/2;
            
                if(nums[mid] >= nums[0]) {
                    s = mid + 1;
                }else {
                    e = mid;
                }
            }
        }
        
        return nums[s];
    }
};

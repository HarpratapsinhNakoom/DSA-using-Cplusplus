//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
    private:
        int binarySearch(vector<int> nums , int s , int e , int target) {
            if(s > e) {
                return -1;
            }
            int mid = s + (e - s)/2;
            if(nums[mid] == target) {
                // cout<<nums[mid]<<endl;
                return mid;
            }
            
            if(nums[mid] > target) {
                return binarySearch(nums , s , mid - 1 , target);
            }else {
                return binarySearch(nums , mid + 1 , e , target);
            }
        }
public:
    int search(vector<int>& nums, int target) {
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
            
            int pivot = s;
            // cout<<pivot<<endl;
            
            
            if(nums[0] > target) {
                // cout<<"IN HERE"<<endl;
                return binarySearch(nums , pivot , nums.size() - 1 , target);
            }else {
                return binarySearch(nums , 0 , pivot - 1 , target);
            }
        }else {
            return binarySearch(nums , s , e , target);      
        }
    }
};

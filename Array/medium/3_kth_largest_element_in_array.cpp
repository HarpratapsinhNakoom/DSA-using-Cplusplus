//https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i = 0 ; i < nums.size() ; i++) {
            //inserting all elements in max heap
            q.push(nums[i]);
        }
        
        //getting the kth element
        for(int i = 0 ; i < k - 1 ; i++) {
            q.pop();
        }
        
        return q.top();
    }
};

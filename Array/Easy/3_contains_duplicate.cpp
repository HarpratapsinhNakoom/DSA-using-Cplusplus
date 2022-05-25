//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int , bool> present;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(!present[nums[i]]) {
                present[nums[i]] = true;
            }else {
                return true;
            }
        }
        
        return false;
    }
};

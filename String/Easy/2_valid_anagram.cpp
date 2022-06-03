// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map <char , int> count;
        
        for(int i = 0 ; i < s.size() ; i++) {
            count[s[i]]++;
        }
        
        for(int i = 0 ; i < t.size() ; i++) {
            count[t[i]]--;
        }
        
        for(auto i : count) {
            if(i.second != 0) {
                return false;
            }
        }
        
        return true;
    }
};

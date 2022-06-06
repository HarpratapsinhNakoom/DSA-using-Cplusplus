// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int ptr = 0;
        
        while(ptr < s.size()) {
            unordered_map<char , int> index;
            int length = 0;
            while(ptr < s.size() and index.count(s[ptr]) == 0) {
                // cout<<ptr<<" ";
                index[s[ptr]] = ptr;
                // cout<<s[ptr]<<" -> "<<index[s[ptr]]<<endl;
                ptr++;
                length++;
            }
            
            // cout<<ptr<<" "<<length<<endl;
            if(ptr < s.size() and index.count(s[ptr])) {
                ptr = index[s[ptr]] + 1;
            }
            // cout<<ptr<<" "<<length<<endl;
            ans = max(ans , length);
            
            // cout<<ans<<endl;
        }
        
        return ans;
    }
};

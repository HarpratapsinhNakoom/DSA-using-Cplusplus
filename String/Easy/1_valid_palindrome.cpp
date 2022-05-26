//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        while(st < e and st < s.size() and e >= 0) {
            while(st < s.size() and !((s[st] >= '0' and s[st] <= '9') or (s[st] >= 'a' and s[st] <= 'z'))) {
                st++;
            }
            while(e >= 0 and !((s[e] >= '0' and s[e] <= '9') or (s[e] >= 'a' and s[e] <= 'z'))) {
                e--;
            }
            
            if(st < e  and st < s.size() and e >= 0) {
                if(s[st] != s[e]) {
                    return false;
                }
                st++;
                e--;
            }
        }
        
        return true;
    }
};

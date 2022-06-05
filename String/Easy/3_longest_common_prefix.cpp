//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0 ; i < strs[0].length() ; i++){
            bool flag = true;
            for(int j = 1 ; j < strs.size() ; j++) {
                if(strs[j].length() < abs(i - 1)){
                    // cout<<"1"<<endl;
                    // cout<<strs[j].length()<<" "<<i - 1<<endl;
                    return ans;
                }
                if(strs[j][i] != strs[0][i]){
                    // cout<<strs[j][i]<<" "<<strs[0][i]<<endl;
                    return ans;
                }
            }
            
            ans += strs[0][i];
            // cout<<ans<<endl;
        }
        
        return ans;
    }
};

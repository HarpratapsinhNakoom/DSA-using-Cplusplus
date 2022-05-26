//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin() , a.end());
        
        int s = 0;
        int e = m - 1;
        
        
        int ans = INT_MAX;
        while(e < n) {
            if(a[e] - a[s] < ans) {
                ans = a[e] - a[s];
            }
            
            e++;
            s++;
        }
        
        return ans;
    }   
};

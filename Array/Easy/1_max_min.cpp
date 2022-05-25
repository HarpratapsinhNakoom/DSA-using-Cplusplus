//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long , long long> ans = make_pair(INT_MAX , INT_MIN);
    for(int i = 0 ; i < n ; i++) {
        if(ans.first > a[i]) {
            ans.first = a[i];
        }
        
        if(ans.second < a[i]) {
            ans.second = a[i];
        }
    }
    
    return ans;
}

//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1/

class Solution {
    private :
        int binarySearch(int A[] , int s , int e , int key) {
            while(s <= e) {
                int mid = s + (e - s)/2;
                
                // cout<<A[mid]<<endl;
                if(A[mid] == key) {
                    return mid;
                } 
                
                
                if(A[mid] > key) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            
            return -1;
        }
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
        // cout<<l<<" "<<h<<endl;
        int pivotIndex = 0;
        int e = h;
        
        while(l < h) {
            int mid = l + (h - l)/2;
            if(A[mid] > A[0]) {
                l = mid + 1;
            }else {
                h = mid;
            }
        }
        
        // cout<<l<<" "<<h<<endl;
        pivotIndex = l;
        
        if(key > A[e - 1]) {
            return binarySearch(A, 0 , pivotIndex - 1, key);
        }else {
            return binarySearch(A, pivotIndex , e, key);
        }
    }
};

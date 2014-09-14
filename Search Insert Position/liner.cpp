class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int i = 0;
        while(A[i] < target && i<n){
            i++;
        }
        if(i == n){
            return n;
        }
        else{
            if(i == 0) return 0;
            else
            return i;
        }
    }
};
/* Given an array of integers A and an integer B, find and return the minimum number of 
swaps required to bring all the numbers less than or equal to B together. */

/*A = [1, 12, 10, 3, 14, 10, 5]
B = 8
Output => 2
*/
// Sliding Window

int Solution::solve(vector<int> &A, int B) {
    // k is window size
    int k = 0, cnt = 0, minSwaps = INT_MAX;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] <= B)
            k++;
    }
    for(int i = 0; i < k; i++) {
        if(A[i] <= B)
            cnt++;
    }
    minSwaps = min(minSwaps, k - cnt);
    for(int i = k; i < A.size(); i++) {
        if(A[i - k] <= B)
            cnt--;
        if(A[i] <= B)
            cnt++;
        minSwaps = min(minSwaps, k - cnt);    
    }
    return minSwaps;
}


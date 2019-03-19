void Solution::nextPermutation(vector<int> &A) {
        // Do not write main() function.
        // Do not read input, instead use the arguments to the function.
        // Do not print the output, instead return values as specified
        // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        int n = A.size(), i;
        for(i = n-2; i>=0; i--)
            if(A[i] < A[i+1])
                break;
        if(i < 0) {
            reverse(A.begin(), A.end());
            return;
        }
        int smallest = i+1;
        for(int j = i+2; j<n; j++)
            if(A[j] > A[i] && A[j] < A[smallest])
                smallest = j;
        swap(A[smallest], A[i]);
        sort(A.begin() + i + 1, A.end());
    }



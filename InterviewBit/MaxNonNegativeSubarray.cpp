vector<int> Solution::maxset(vector<int> &A) {
    long long int currSum = 0, maxSum = 0, 
    start = 0, currStart = 0, end = -1;
    for(int i=0; i<A.size(); i++) {
        currSum += A[i];
        if(A[i] < 0) {
            currSum = 0;
            currStart = i+1;
        }
        if(currSum > maxSum || (currSum >= maxSum && i-currStart > end - start)) {
            start = currStart;
            maxSum = currSum;
            end = i;
        }    
        // cout << currSum << " " << maxSum << endl;
    }
    vector<int> res;
    for(int i = start; i <= end; i++) {
        if(A[i] < 0)
            return {};
        res.push_back(A[i]);
    }
    return res;    
}


class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int besti = 0, ans = A[0];
        for(int j = 1; j < A.size(); j++) {
            ans = max(ans, A[besti] + besti + A[j] - j);
            if(A[j] + j > A[besti] + besti) {
                besti = j;
            }
        }
        return ans;
    }
};

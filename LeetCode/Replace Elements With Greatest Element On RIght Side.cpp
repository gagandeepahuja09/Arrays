class Solution {
public:
    vector<int> replaceElements(vector<int>& A) {
        int n = A.size();
        vector<int> mx(n);
        mx[n - 1] = A[n - 1];
        for(int i = A.size() - 2; i >= 0; i--) {
            mx[i] = max(mx[i + 1], A[i]);
        }
        vector<int> ret;
        for(int i = 1; i < A.size(); i++)
            ret.push_back(mx[i]);
        ret.push_back(-1);
        return ret;
    }
};

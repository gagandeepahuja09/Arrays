class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)
            return false;
        int i = 0;
        bool f1 = false, f2 = false;
        while(i < A.size() - 1) {
            while(i < A.size() - 1 && A[i] < A[i + 1]) {
                // cout << "y " << i << endl;
                i++;
                f1 = true;
            }
            while(i < A.size() - 1 && f1 && A[i] > A[i + 1]) {
                // cout << "n " << i << endl;
                i++;
                f2 = true;
            }
            if(!f1 || !f2 || i < A.size() - 1)
                break;
        }
        return (f1 && f2 && i >= A.size() - 1);
    }
};

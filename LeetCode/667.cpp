class Solution {
public:
    vector<int> constructArray(int n, int k) {
        // 1 2 3 4 5 6 7 8
        // 1 8 2 7 3 6 4 5
        vector<int> ret;
        int i = 1, j = n;
        for (int l = 0; l < k; l++) {
            ret.push_back(l % 2 == 0 ? i++ : j--);
        }
        if (ret.back() == i - 1) {
            while (i <= j) {
                ret.push_back(i++);
            }
        } else {
            while (i <= j) {
                ret.push_back(j--);
            }
        }
        return ret;
    }
};

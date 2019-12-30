class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n % 2) {
            v.push_back(0);
            n--;
        }
        int i = 1;
        while(n) {
            v.push_back(i); v.push_back(-i);
            n -= 2;
            i++;
        }
        return v;
    }
};

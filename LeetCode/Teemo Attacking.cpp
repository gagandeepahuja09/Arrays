class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int ans = 0;
        for(int i = 0; i < t.size(); i++) {
            if(i < t.size() - 1)
                ans += min(t[i + 1] - t[i], d);
            else
                ans += d;
        }
        return ans;
    }
};

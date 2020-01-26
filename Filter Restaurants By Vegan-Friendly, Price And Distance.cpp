class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& res, int veg, int maxP, int maxD) {
        vector<pair<int, int>> vp;
        for(int i = 0; i < res.size(); i++) {
            if(res[i][3] <= maxP && res[i][4] <= maxD) {
                if(veg == 1 && res[i][2] == 0)
                    continue;
                vp.push_back({ res[i][1], res[i][0] });
            }
        }
        sort(vp.begin(), vp.end());
        vector<int> ret;
        for(int i = vp.size() - 1; i >= 0; i--) {
            ret.push_back(vp[i].second);
        }
        return ret;
    }
};

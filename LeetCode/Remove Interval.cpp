class Solution {
public:
    vector<vector<int>> removeInterval(vector<vector<int>>& in, vector<int>& to) {
        int px = to[0], py = to[1];
        vector<vector<int>> ret;
        for(int i = 0; i < in.size(); i++) {
            int x = in[i][0], y = in[i][1];
            if(x > py || y < px) {
                ret.push_back(in[i]);
            }
            else if(x <= py && x >= px && y >= px && y <= py)
                continue;
            else if(y >= px && y <= py) {
                ret.push_back({ x, px });
            }
            else if(x >= px && x <= py) {
                ret.push_back({ py, y });
            }
            else {
                ret.push_back({ x, px });
                ret.push_back({ py, y });
            }
        }
        return ret;
    }
};

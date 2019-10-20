class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>& slots1, vector<vector<int>>& slots2, int duration) {
        int n = slots1.size(), m = slots2.size();
        sort(slots1.begin(), slots1.end());
        sort(slots2.begin(), slots2.end());
        int i = 0, j = 0;
        while(i < n && j < m) {
            // cout << i << " " << j << " ";
            int s1 = slots1[i][0], e1 = slots1[i][1], s2 = slots2[j][0], e2 = slots2[j][1];
            if((s2 >= s1 && s2 <= e1) || (s1 >= s2 && s1 <= e2)) {
                int d = min(e1, e2) - max(s1, s2);
                // cout << "d  " << d << endl; 
                if(d >= duration) {
                    return { max(s1, s2), max(s1, s2) + duration };
                }
            }
            if(e1 > e2) {
                j++;
            }
            else
                i++;
        }
        return {};
    }
};

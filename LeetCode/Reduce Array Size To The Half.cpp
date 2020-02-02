class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int count = arr.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        int sz = 0;
        vector<vector<int>> p;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            p.push_back({ it -> second, it -> first });
        }
        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());
        for(int i = 0; i < p.size(); i++) {
            count -= p[i][0];
            sz++;
            if(count <= arr.size() / 2)
                return sz;
        }
        return 0;
    }
};

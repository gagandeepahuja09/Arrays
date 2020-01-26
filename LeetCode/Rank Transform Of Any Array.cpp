class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st;
        for(int i = 0; i < arr.size(); i++) {
            st.insert(arr[i]);
        }
        unordered_map<int, int> mp;
        int rank = 1;
        for(auto i : st) {
            mp[i] = rank++;
        }
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i : arr)
            mp[i]++;
        int n = arr.size();
        for(auto it : mp) {
            if(it.second > n / 4)
                return it.first;
        }
        return 0;
    }
};

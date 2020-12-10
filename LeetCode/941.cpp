class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0, flag = false;
        while(i < arr.size() - 1 && arr[i] < arr[i + 1]) {
            i++;
        }
        while(i > 0 && i < arr.size() - 1 && arr[i] > arr[i + 1]) {
            flag = true;
            i++;
        }
        return (flag && i == arr.size() - 1);
    }
};

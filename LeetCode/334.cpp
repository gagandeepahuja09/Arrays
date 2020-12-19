class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX, secondSmallest = INT_MAX;
        for (int i : nums) {
            if (i <= smallest) {
                smallest = i;
            } else if (i <= secondSmallest) {
                secondSmallest = i;
            } else {
                return true;
            }
        }
        return false;
    }
};

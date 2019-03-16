bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    int n = arrive.size(), i = 0, j = 0;
    int rooms = 0;
    while(i < n && j < n) {
        if(arrive[i] < depart[j]) {
            rooms++;
            i++;
        }
        else {
            rooms--;
            j++;
        }
        if(rooms > K)
            return false;
    }
    return true;
}


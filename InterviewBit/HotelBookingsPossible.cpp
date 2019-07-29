bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int, int>> p;
    for(int i = 0; i < arrive.size(); i++) {
        p.push_back({ arrive[i], 1 });
        p.push_back({ depart[i], 0 });
    }
    sort(p.begin(), p.end());
    int cnt = 0;
    for(int i = 0; i < p.size(); i++) {
        if(p[i].second == 1)
            cnt++;
        else
            cnt--;
        if(cnt > K)
            return false;
    }
    return true;
}


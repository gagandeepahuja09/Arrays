class Solution {
public:
    string pushDominoes(string d) {
        int N = d.size();
        vector<int> forces(N);
        int force = 0;
        for(int i = 0; i < N; i++) {
            if(d[i] == 'R')
                force = N;
            else if(d[i] == 'L')
                force = 0;
            else 
                force = max(force - 1, 0);
            forces[i] = force;
        }
        force = 0;
        for(int i = N - 1; i >= 0; i--) {
            if(d[i] == 'L')
                force = N;
            else if(d[i] == 'R')
                force = 0;
            else
                force = max(force - 1, 0);
            forces[i] -= force;
        }
        string ret;
        for(int i = 0; i < N; i++)
            ret += (forces[i] > 0 ? 'R' : forces[i] < 0 ? 'L' : '.');
        return ret;
    }
};

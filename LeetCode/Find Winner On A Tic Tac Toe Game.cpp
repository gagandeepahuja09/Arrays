class Solution {
public:
    bool poss(vector<vector<int>>& g, int x) {
        for(int i = 0; i < 3; i++) {
            bool f = true;
            for(int j = 0; j < 3; j++) {
                if(g[i][j] != x)
                    f = false;
            }
            if(f)
                return true;
        }
        
        for(int j = 0; j < 3; j++) {
            bool f = true;
            for(int i = 0; i < 3; i++) {
                if(g[i][j] != x)
                    f = false;
            }
            if(f)
                return true;
        }
        
        int i = 0;
        bool f = true;
        while(i < 3) {
            if(g[i][i] != x)
                f = false;
            i++;
        }
        if(f)
            return true;
        f = true;
        int j = 0; i = 2;
        while(j < 3 && i >= 0) {
            // cout << g[i][j] << endl;
            if(g[i][j] != x)
                f = false;
            i--; j++;
        }
        return f;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        int ans = 0;
        vector<vector<int>> g(3, vector<int>(3, 0));
        for(int i = 0; i < moves.size(); i++) {
            int x = moves[i][0], y = moves[i][1];
            if(i % 2 == 0) {
                g[x][y] = 1;
                if(poss(g, 1))
                    return "A";
            }
            else {
                g[x][y] = 2;
                if(poss(g, 2))
                    return "B";
            }
        }
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(g[i][j] == 0)
                    ans = 1;
            }
        }
        if(ans == 1)
            return "Pending";
        return "Draw";
    }
};

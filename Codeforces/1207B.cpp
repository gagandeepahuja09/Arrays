    #include <bits/stdc++.h>
    using namespace std;
     
    bool check(vector<vector<int>>& a, int i, int j) {
        return (a[i][j] && a[i + 1][j] && a[i][j + 1] && a[i + 1][j + 1]);
    }
     
    void fill(vector<vector<int>>& a, int i, int j) {
        a[i][j] = a[i + 1][j] = a[i][j + 1] = a[i + 1][j + 1] = 1;
    }
     
    int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));
        vector<vector<int>> b = a;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        vector<vector<int>> ret;
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m - 1; j++) {
                if(check(a, i, j)) {
                    fill(b, i, j);
                    ret.push_back({ i, j });
                }
            }
        }
        
        bool ans = true;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j] != b[i][j]) {
                    ans = false;
                    break;
                }
            }
        }
        if(!ans)
            cout << -1;
        else {
            cout << ret.size() << endl;
            for(auto i : ret) 
                cout << i[0] + 1 << " " << i[1] + 1 << endl;
        }
        return 0;
    }


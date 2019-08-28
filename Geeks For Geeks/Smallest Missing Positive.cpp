#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int ans = n + 1;    
        for(int i = 0; i < n; i++) {
            if(A[i] >= 1 && 
            A[i] <= n && A[i] != A[A[i] - 1]) {
                swap(A[i], A[A[i] - 1]);
                i--;
            }
        }
        for(int i = 0; i < n; i++) {
            if(A[i] != i + 1) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
	return 0;
}

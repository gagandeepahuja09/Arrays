#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void shuffleArray(vector<int>& a, int l, int r) {
    if(r - l <= 1)
        return;
    int mid = l + (r - l) / 2;
    int lmid = (l + mid) / 2;
    for(int i = lmid + 1, j = mid + 1; i <= mid; i++, j++) {
        // cout << a[i] << " " << a[j] << endl;
        swap(a[i], a[j]);
    }
    shuffleArray(a, l, mid);
    shuffleArray(a, mid + 1, r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        /*
        // Brute Force N^2
        for(int i = 0, k = n / 2, q = 1;
        k < n; i++, k++, q++) {
            for(int j = k; j > i + q; j--) {
                swap(a[j - 1], a[j]);
            }
        }
        */
        // N logN
        // shuffleArray(a, 0, n - 1);
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;    
    }
	return 0;
}

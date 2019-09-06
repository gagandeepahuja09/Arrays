#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void rev(vector<int>& a, int l) {
    int r = a.size() - 1;
    while(l <= r) {
        swap(a[l++], a[r--]);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int j = n - 2;
        while(j >= 0 && a[j] > a[j + 1]) {
            j--;
        }
        if(j < 0) {
            reverse(a.begin(), a.end());
        }
        else {
            int pos = n - 1;
            for(int i = n - 1; i > j; i--) {
                if(a[i] > a[j]) {
                    pos = i;
                    break;
                }
            }
            swap(a[j], a[pos]);
            rev(a, j + 1);
        }
        for(int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;    
    }
	return 0;
}

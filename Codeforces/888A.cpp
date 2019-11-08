#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

int main() {
ll n;
cin >> n;
vector<ll> a(n);
for(int i = 0; i < n; i++)
    cin >> a[i];
ll cnt = 0;    
for(int i = 1; i < n - 1; i++) {
    if(a[i] < a[i - 1] && a[i] < a[i + 1])
        cnt++;
    if(a[i] > a[i + 1] && a[i] > a[i - 1])
        cnt++;    
}    
cout << cnt << endl;
}

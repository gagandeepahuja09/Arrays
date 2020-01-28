#include<iostream>
#include<vector>
using namespace std;

void flip(vector<int>& A, int k) {
  int i = 0, j = k;
  while(i <= j) {
    swap(A[i++], A[j--]);
  }
}

vector<int> pancakeSort(const vector<int>& arr) {
  vector<int> A = arr;
  int l = 0;
  int n = A.size();
  for(int i = 0; i < n; i++) {
    int mx = INT_MIN, idx = -1;
    for(int j = 0; j < n - i; j++) {
      if(A[j] > mx) {
        mx = A[j];
        idx = j;
      }
    }
    // cout << idx << endl;
    flip(A, idx);
    flip(A, n - 1- i);
  }
  for(int i = 0; i < n; i++)
    cout << A[i] << " ";
  return A;
}

int main() {
  return 0;
}

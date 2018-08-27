#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long K;
  vector<int> right;
  vector<int> left;
  for (int i=0; i<N; i++){
    int L, R;
    cin >> L >> R;
    if (L > 0) right.push_back(L);
    else if (R < 0) left.push_back(R);
  }
  sort(right.begin(), right.end(), greater<int>());
  sort(left.begin(), left.end());
  int m = min(left.size(),right.size());
  for (int i=0; i<m; i++){
    K += 2*right[i];
    K += -2*left[i];
  }
  if (left.size() > right.size()+1){
    int i = m-1;
    int k = left.size()-1;
    while (i < k){
      K += left[k] - left[i];
      i++;
      if (i == k) break;
      K += left[k] - left[i];
      k--;
    }
    K += -left[k];
  }
  else if (left.size() == right.size()+1) K += -2*left[m];
  else if (left.size()+1 < right.size()){
    int i = m;
    int k = right.size()-1;
    if (m == 0) K += right[i];
    else K -= right[i];
    while (i < k){
      K += right[i] - right[k];
      i++;
      if (i == k) break;
      K += right[i] - right[k];
      k--;
    }
    K += right[k];
  }
  else if (left.size()+1 == right.size()) K += 2*right[m];
  cout << K << endl;
}

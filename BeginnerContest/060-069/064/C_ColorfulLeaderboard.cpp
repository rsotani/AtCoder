#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  int count = 0;
  for (int i=0; i<N; i++)
    cin >> a[i];
  set<int> s;
  for (int i=0; i<N; i++){
    if (a[i] < 3200)
      s.insert(a[i]/400);
    else count++;
  }
  int maxi = s.size() + count;
  int mini;
  if (s.size() == 0)
    mini = 1;
  else
    mini = s.size();
  cout << mini << ' ' << maxi << endl;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  set<int> aset;
  for (int i=0; i<N; i++){
    cin >> a[i];
    aset.insert(a[i]);
  }
  vector<int> nu;
  for (auto iter= aset.begin(); iter != aset.end(); iter++) nu.push_back(*iter);
  for (int i: a){
    auto itr = lower_bound(nu.begin(), nu.end(), i);
    cout << distance(nu.begin(),itr) << endl;
  }
}

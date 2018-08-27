#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  map<long long, int> mp;
  vector<vector<long long> > C(51, vector<long long>(51));
  for (int i=0; i<51; i++){
    for (int j=0; j<=i; j++){
      if ((j==0) || (j==i)) C[i][j] = 1;
      else C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
  }
  vector<long long> val;
  for (int i=0; i<N; i++){
    long long v;
    cin >> v;
    mp[v]++;
    if (mp[v] == 1) val.push_back(v);
  }
  sort(val.begin(),val.end());
  reverse(val.begin(),val.end());
  int atleast = A;
  double ansmean = 0;
  long long anspattern = 0;
  for (long long i: val){
    if (mp[i] < atleast){
      atleast -= mp[i];
      ansmean += mp[i]*i/(double)A;
    } else {
      long long count;
      mp[i] < B ? (count=mp[i]) :(count=B);
      ansmean += atleast*i/(double)A;
      if (ansmean == i){
        for (int j=atleast; j<=count; j++) anspattern += C[mp[i]][j];
      } else anspattern += C[mp[i]][atleast];
      break;
    }
  }
  cout << fixed << setprecision(10);
  cout << ansmean << endl;
  cout << anspattern << endl;
}

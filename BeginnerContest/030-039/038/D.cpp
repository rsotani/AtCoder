#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int, int>> wh(N);
  for (int i=0; i<N; i++){
    cin >> wh[i].first >> wh[i].second;
  }
  sort(wh.begin(), wh.end(), [](const auto& a, const auto b){ return (a.first == b.first)? (a.second>b.second):(a.first>b.first);});
  int ans1 = 1;
  int w = wh[0].first, h=wh[0].second;
  for (int i=1; i<N; i++){
    if (w>wh[i].first&&h>wh[i].second){
      ans1++;
      w = wh[i].first; h = wh[i].second;
    }
  }
  sort(wh.begin(), wh.end(), [](const auto& a, const auto b){ return (a.second == b.second)? (a.first>b.first):(a.second>b.second);});
  int ans2 = 1;
  w = wh[0].first, h=wh[0].second;
  for (int i=1; i<N; i++){
    if (w>wh[i].first&&h>wh[i].second){
      ans2++;
      w = wh[i].first; h = wh[i].second;
    }
  }
  cout << max(ans1, ans2) << endl;
}

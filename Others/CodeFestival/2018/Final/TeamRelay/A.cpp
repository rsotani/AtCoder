#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string, string> mp;
  vector<string> hoge = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
  for (int i=0; i<7; i++){
    mp[hoge[i]] = hoge[(i+1)%7];
  }
  for (int i=0; i<N; i++){
    string s;
    cin >> s;
    cout << mp[s] << endl;
  }
}

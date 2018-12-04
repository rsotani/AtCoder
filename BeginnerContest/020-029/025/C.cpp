#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> b(2, vector<int>(3));
vector<vector<int>> c(3, vector<int>(2));

int dfs(string s=""){
  // cout << s << endl;
  int tmp;
  if (s.size()==9){
    tmp=0;
    vector<int> hoge(9,0);
    for (int i=0; i<9; i++){
      if (i%2==0){
        hoge[s[i]-'1']++;
      } else {
        hoge[s[i]-'1']--;
      }
    }
    for (int i=0; i<2; i++){
      for (int j=0; j<3; j++){
        if (hoge[i*3+j]==hoge[(i+1)*3+j]){
          tmp += b[i][j];
        }
      }
    }
    for (int i=0; i<3; i++){
      for (int j=0; j<2; j++){
        if (hoge[i*3+j]==hoge[i*3+j+1]){
          tmp += c[i][j];
        }
      }
    }
    // cout << s << endl;
    // cout << tmp << endl;
  } else if (s.size()%2==0){
    tmp=0;
    for (char i='1'; i<='9'; i++){
      if (s.find(i)==string::npos){
        tmp = max(tmp, dfs(s+i));
      }
    }
  } else {
    tmp=10000;
    for (char i='1'; i<='9'; i++){
      if (s.find(i)==string::npos){
        tmp = min(tmp, dfs(s+i));
      }
    }
  }
  return tmp;
}

int main(){
  int sumscore = 0;
  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      cin >> b[i][j];
      sumscore += b[i][j];
    }
  }
  for (int i=0; i<3; i++){
    for (int j=0; j<2; j++){
      cin >> c[i][j];
      sumscore += c[i][j];
    }
  }
  int tkhs = dfs();
  cout << tkhs << endl;
  cout << sumscore-tkhs << endl;
}

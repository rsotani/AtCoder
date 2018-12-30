#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<char>> S(N, vector<char>(N));
  for (int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cin >> S[i][j];
    }
  }
  int count = 0;
  for (int i=0; i<N; i++){
    for (int j=N-1; j>=0; j--){
      if (S[i][j]=='.'){
        count++;
        for (int x=0; x<=j; x++) S[i][x] = 'o';
        if (i<N-1){
          for (int x=j; x<N; x++) S[i+1][x] = 'o';
        }
      }
    }
  }
  cout << count << endl;
}

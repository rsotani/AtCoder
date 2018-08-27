#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  char befchar = S[0];
  int count = 0;
  for (int i=1; i<S.size(); i++){
    if (S[i] != befchar){
      count++;
      befchar = S[i];
    }
  }
  cout << count << endl;
}

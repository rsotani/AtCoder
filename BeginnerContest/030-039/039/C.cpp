#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  vector<string> mel = {"Do",".","Re",".","Mi","Fa",".","So",".","La",".","Si"};
  for (int i=0; i<20; i++){
    if ((S[i] == 'W') && (S[i+1] == 'W') && (S[i+5] == 'W') && (S[i+6] == 'W')){
      cout << mel[(11-i+24)%12] << endl;
      return 0;
    }
  }
}

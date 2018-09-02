#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string c;
  cin >> c;
  int score1=0, score2=0, score3=0, score4=0;
  for (auto a: c){
    if (a=='1') score1++;
    else if (a=='2') score2++;
    else if (a=='3') score3++;
    else score4++;
  }
  cout << max(max(score1,score2),max(score3,score4)) << ' ' << min(min(score1, score2), min(score3, score4)) << endl;
}

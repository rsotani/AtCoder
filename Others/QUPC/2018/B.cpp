#include <bits/stdc++.h>
using namespace std;

int main(){
  int Q;
  cin >> Q;
  vector<string> anslist;
  for (int i=0; i<Q; i++){
    int A, B, C;
    string ans;
    cin >> A >> B >> C;
    if (C%2==1) ans = "No";
    else if (B%2==1&&C<10) ans = "No";
    else if (A%2==1){
      if (B+C/10<10) ans = "No";
      else ans = "Yes";
    }
    else ans = "Yes";
    anslist.push_back(ans);
  }
  for (auto i: anslist){
    cout << i << endl;
  }
}

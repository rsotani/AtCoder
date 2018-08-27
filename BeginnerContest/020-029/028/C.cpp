#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> abcde(5);
  for (int i=0; i<5; i++) cin >> abcde[i];
  vector<int> ans;
  for (int i=0; i<3; i++){
    for (int j=i+1; j<4; j++){
      for (int k=j+1; k<5; k++){
        int val = abcde[i]+abcde[j]+abcde[k];
        //cout << val << endl;
        ans.push_back(val);
      }
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans[7] << endl;
}

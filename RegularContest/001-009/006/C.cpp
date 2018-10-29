#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> ans;
  for (int i=0; i<N; i++){
    int w;
    cin >> w;
    bool flag = true;
    for (int j=0; j<ans.size(); j++){
      if(ans[j]>=w){
        ans[j]=w;
        flag=false;
        break;
      }
    }
    if (flag){
      ans.push_back(w);
    }
  }
  cout << ans.size() << endl;
}

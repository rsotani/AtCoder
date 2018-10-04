#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> NGs(3);
  for (int i=0; i<3; i++) cin >> NGs[i];
  sort(NGs.begin(), NGs.end());
  if ((NGs[0]+1==NGs[1])&&(NGs[1]+1==NGs[2])&&(NGs[2]<N)){
    cout << "NO" << endl;
    return 0;
  }
  for (int i=0; i<3; i++){
    if (NGs[i]==N){
      cout << "NO" << endl;
      return 0;
    }
  }
  if (N<=297) ;
  else if (N==300){
    for (int i=0; i<3; i++){
      if (NGs[i]%3==0){
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  else if (N==299){
    if (((NGs[2]%3==2)&&((NGs[1]%3==0)||(NGs[0]%3==0)))||(NGs[1]%3==2&&NGs[0]%2==0)){
      cout << "NO" << endl;
      return 0;
    }
  }
  else if (N==298){
    if ((NGs[2]%3==1)&&(NGs[1]%3==2)&&(NGs[0]%3==0)){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}

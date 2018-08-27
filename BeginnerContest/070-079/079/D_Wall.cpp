#include <bits/stdc++.h>
using namespace std;

void mincost(vector<vector<int>> c, vector<int> &cost, int i, int nowi, int nowcos, set<int> st){
  for(int j=0; j<10; j++){
    if ((nowi==j) || (st.find(j) != st.end())) continue;
    else if (j==1) {cost[i] = min(cost[i],c[nowi][j]+nowcos);
      //cout << "i:" << i << "  nowi:" << nowi << "  cost:" << cost[i] << endl;
    }
    else if (nowcos+c[nowi][j] < cost[i]){
      st.insert(nowi);
      //cout << "i:" << i << "  nowi:" << nowi << endl;
      mincost(c,cost,i,j,nowcos+c[nowi][j],st);
    }
  }
}
a
int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int> > c(10, vector<int>(10,0));
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++) cin >> c[i][j];
  }
  vector<vector<int> > A(H, vector<int>(W));
  vector<int> cost(10);
  for (int i=0; i<10; i++) cost[i] = c[i][1];
  for (int i=0; i<10; i++){
    set<int> st;
    mincost(c,cost,i,i,0,st);
  }
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++) cin >> A[i][j];
  }
  long long ans = 0;
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      if (A[i][j]>=0) ans += cost[A[i][j]];
    }
  }
  cout << ans << endl;
  //for (int i=0; i<10; i++) cout << cost[i] << endl;
}

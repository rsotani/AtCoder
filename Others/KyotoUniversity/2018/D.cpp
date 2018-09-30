#include <bits/stdc++.h>
using namespace std;

int main(){
  long long mx = 1e9;
  long long mn = 1;
  printf("? %d\n", mx);
  fflush(stdout);
  string r;
  cin >> r;
  while (true){
    long long check = (mx+mn)/2;
    if (check%2==0) check++;
    printf("? %d\n", check);
    fflush(stdout);
    string res;
    cin >> res;
    if (res==r){
      mx = check;
    }
    else{
      mn = check+1;
    }
    if ((mx-mn<=2)){
      int ans;
      if (r=="even") ans = (mx+mn)/2;
      else ans = (mx+mn)/2-1;
      printf("! %d\n", ans);
      fflush(stdout);
      return 0;
    }
  }
}

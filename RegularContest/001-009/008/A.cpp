#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans1 = (N/10+1)*100;
  int ans2 = (N/10)*100+(N%10)*15;
  cout << min(ans1, ans2) << endl;
}

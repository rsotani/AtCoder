#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> hoge;
  for (int i=0; i<N; i++){
    int a;
    cin >> a;
    while (a%2==0){
      a/=2;
    }
    hoge.insert(a);
  }
  cout << hoge.size() << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  string name;
  cin >> name;
  int namelen = name.size();
  for (int i=0; i<namelen/2; i++){
    if (name[i] != name[namelen-1-i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}

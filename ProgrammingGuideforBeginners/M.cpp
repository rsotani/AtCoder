#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int count = 1;
  for (int i=1; i<S.size(); i += 2){
    if (S.at(i) == '+')
    count++;
    else
    count--;
  }
  cout << count << endl;
}

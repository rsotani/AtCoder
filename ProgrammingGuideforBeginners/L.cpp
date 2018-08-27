#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  bool flag = true;
  cin >> N >> A;
  for (int i = 0; i < N; i++){
    string op;
    int B;
    cin >> op >> B;
    if (flag){
      if (op == "+"){
        A += B;
        cout << i+1 << ":" << A << endl;
      }
      else if (op == "-"){
        A -= B;
        cout << i+1 << ":" << A << endl;
      }
      else if (op == "*"){
        A *= B;
        cout << i+1 << ":" << A << endl;
      }
      else if (op == "/"){
        if (B == 0){
          flag = false;
          cout << "error" << endl;
        }
        else{
          A /= B;
          cout << i+1 << ":" << A << endl;
        }
      }
    }
  }
}

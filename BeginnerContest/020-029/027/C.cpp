#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  string Nbin;
  long long a = N;
  while(a){
    if (a&1) Nbin += '1';
    else Nbin += '0';
    a >>= 1;
  }
  reverse(Nbin.begin(),Nbin.end());
  int Nlen = Nbin.size();
  if (Nlen == 1) cout << "Aoki" << endl;
  else{
    if (Nlen % 2 == 0){
      for (int i=1; i<Nlen; i++){
        if ((i%2 == 1) && (Nbin[i] == '1')){
          cout << "Takahashi" << endl;
          return 0;
        } else if ((i%2 == 0) && (Nbin[i] == '0')){
          cout << "Aoki" << endl;
          return 0;
        }
      }
      cout << "Takahashi" << endl;
    } else {
      for (int i=1; i<Nlen; i++){
        if ((i%2 == 1) && (Nbin[i] == '0')){
          cout << "Takahashi" << endl;
          return 0;
        } else if ((i%2 == 0) && (Nbin[i] == '1')){
          cout << "Aoki" << endl;
          return 0;
        }
      }
      cout << "Aoki" << endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int C;
  cin >> C;
  int Nmax=0, Mmax=0, Lmax=0;
  for (int i=0; i<C; i++){
    vector<int> NML(3);
    cin >> NML[0] >> NML[1] >> NML[2];
    sort(NML.begin(), NML.end());
    Nmax = max(NML[0], Nmax);
    Mmax = max(NML[1], Mmax);
    Lmax = max(NML[2], Lmax);
  }
  cout << Nmax*Mmax*Lmax << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int lenS = S.size();
  int i = 0;
  string dream = "dream";
  string erase = "erase";
  while (i < lenS){
    if (S.at(i) == 'd'){
      for (int j=1; j<5; j++){
        if (i+j >= lenS){
          cout << "NO" << endl;
          return 0;
        }
        if (S.at(i+j) != dream.at(j)){
          cout << "NO" << endl;
          return 0;
        }
      }
      i += 5;
      if (i >= lenS) break;
      if (S.at(i) != 'e') ;
      else{
        if (i+1 >= lenS){
          cout << "NO" << endl;
          return 0;
        }
        if ((i+2 < lenS) && (S.at(i+2) == 'a')) ;
        else{
          if (S.at(i+1) == 'r')
            i += 2;
          else{
            cout << "NO" << endl;
            return 0;
          }
        }
      }
    }
  else if (S.at(i) == 'e'){
    for (int j=1; j<5; j++){
      if (i+j >= lenS){
        cout << "NO" << endl;
        return 0;
      }
      if (S.at(i+j) != erase.at(j)){
        cout << "NO" << endl;
        return 0;
      }
    }
    i += 5;
    if (i >= lenS) break;
    if (S.at(i) == 'r') i++;
    else if (S.at(i) == 'd' || S.at(i) == 'e') ;
    else{
      cout << "NO" << endl;
      return 0;
    }
  }
  else{
    cout << "NO" << endl;
    return 0;
  }
  }
  cout << "YES" << endl;
}

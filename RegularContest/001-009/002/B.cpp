#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int Y, M, D;
  Y = stoi(S.substr(0,4));
  M = stoi(S.substr(5,2));
  D = stoi(S.substr(8,2));
  while(true){
    if (Y%(M*D)==0){
      string ans = "";
      ans += to_string(Y);
      ans += '/';
      if (M<10) ans += '0';
      ans += to_string(M);
      ans += '/';
      if (D<10) ans += '0';
      ans += to_string(D);
      cout << ans << endl;
      return 0;
    }
    if ((M==1)||(M==3)||(M==5)||(M==7)||(M==8)||(M==10)||(M==12)){
      if (D<31) D++;
      else if (M==12){
        Y++; M=1; D=1;
      } else {
        M++; D=1;
      }
    }
    else if (M==2){
      if (Y%400==0){
        if (D<29) D++;
        else{
          D=1; M++;
        }
      }
      else if (Y%100==0){
        if (D<28) D++;
        else{
          D=1; M++;
        }
      }
      else{
        if (D<29) D++;
        else{
          D=1; M++;
        }
      }
    }
    else{
      if (D<30) D++;
      else {
        M++;D=1;
      }
    }
  }
}

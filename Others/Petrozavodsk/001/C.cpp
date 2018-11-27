#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  cout << 0 << endl;
  string befres;
  cin >> befres;
  if (befres=="Vacant"){
    return 0;
  }
  int befnum = 0;
  int u=N-1, l=0;
  while (true){
    int check = (u+l)/2;
    if (check==befnum){
      check++;
    }
    string res;
    cout << check << endl;
    cin >> res;
    if (res == "Vacant"){
      return 0;
    }
    if (abs(check-befnum)%2==0){
      if ((res==befres&&check>befnum)||(res!=befres&&check<befnum)){
        l = check;
      } else {
        u = check;
      }
    } else {
      if ((res==befres&&check>befnum)||(res!=befres&&check<befnum)){
        u = check;
      } else {
        l = check;
      }
    }
    befres = res;
    befnum = check;
  }
}

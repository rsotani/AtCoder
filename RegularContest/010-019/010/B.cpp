#include <bits/stdc++.h>
using namespace std;

vector<int> days(366,0);

void dayplus(int day){
  if (days[day]==0) days[day]++;
  else if (day+1<366) dayplus(day+1);
}

int main(){
  vector<int> mn = {0,31,29,31,30,31,30,31,31,30,31,30,31};
  for (int i=1; i<13; i++) mn[i] += mn[i-1];
  for (int i=0; i<366; i+=7){
    days[i]++;
    if (i+6<366) days[i+6]++;
  }
  int N;
  cin >> N;
  for (int i=0; i<N; i++){
    string str;
    cin >> str;
    int month, day;
    if (str[1]=='/'){
      month = str[0]-'0';
      if (str.substr(2).size()==1) day = str[2]-'0';
      else day = (str[2]-'0')*10+(str[3]-'0');
    }
    else {
      month = 10 + (str[1]-'0');
      if (str.substr(3).size()==1) day = str[3]-'0';
      else day = (str[3]-'0')*10+(str[4]-'0');
    }
    dayplus(day+mn[month-1]-1);
  }
  int ans = 0;
  int tmpcount = 0;
  for (int i=0; i<366; i++){
    if (days[i]==1) tmpcount++;
    else {
      ans = max(ans, tmpcount);
      tmpcount = 0;
    }
  }
  ans = max(tmpcount, ans);
  cout << ans << endl;
}

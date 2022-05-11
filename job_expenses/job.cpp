#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int tc=0;
  cin>>tc;
  int acc = 0;
  while(tc--){
    int tmp;
    cin>>tmp;
    (tmp<0)?acc+=tmp:0;
  }
  cout<<abs(acc);
  return 0;
}
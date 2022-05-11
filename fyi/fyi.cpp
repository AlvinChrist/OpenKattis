#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);

  string number;
  cin>>number;
  for(int i=0; i<3; i++){
    if(number[i]!='5'){
      cout<<0;
      return 0;
    }
  }
  cout<<1;
  return 0;
}
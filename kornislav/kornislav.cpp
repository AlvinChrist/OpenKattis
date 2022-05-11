#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int tc = 4;
  int steps[4] = {0,0,0,0};
  for(int i = 0; i < tc; i++){
    cin>>steps[i];
  }
  sort(steps,steps+4);
  cout<<steps[0] * steps[2];
  return 0;
}
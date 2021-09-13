#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int days = 0;
  string input;
  cin >> input;
  days = input.length();
  for(int i=0;i<input.size();i++){
    if(i%3==0 && input[i]=='P'){
      days--;
    }
    else if(i%3==1 && input[i]=='E'){
      days--;
    }
    else if(i%3==2 && input[i]=='R'){
      days--;
    }
  }
  cout<<days;
}
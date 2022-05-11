#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  string Y,P;
  cin>>Y>>P;
  int end = Y.length()-1;
  if(Y[end-1]=='e' && Y[end]=='x'){
    cout<<Y<<P;
  }
  else if(Y[end]=='e'){
    cout<<Y<<'x'<<P;
  }
  else if(Y[end]=='a' || Y[end]=='o' || Y[end]=='i' || Y[end]=='u'){
    Y.pop_back();
    cout<<Y<<"ex"<<P;
  }
  else{
    cout<<Y<<"ex"<<P;
  }
  return 0;
}
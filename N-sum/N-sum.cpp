#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  int N;
  cin >> N;
  ll result = 0;
  while(N--){
    int tmp;
    cin >> tmp;
    result += tmp;
  }
  cout << result; 
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int n, tc;
  cin>>n>>tc;
  map<int,long long> company_location;
  for(int i = 1; i< n+1; i++){
      long long tmp;
      cin>>tmp;
      company_location.insert(pair<int,long long>(i,tmp));
  }
  while(tc--){
    int command;
    cin>>command;
    if(command==1){
      int c;
      long long loc;
      cin>>c>>loc;
      auto it = company_location.find(c);
      it->second = loc;
    }
    else{
      int a,b;
      cin>>a>>b;
      auto it1 = company_location.find(a);
      auto it2 = company_location.find(b);
      cout<<abs(it2->second-it1->second)<<'\n';
    }
  }
  return 0;
}
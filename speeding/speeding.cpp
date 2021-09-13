#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int tc;
  cin>>tc;
  int maks_speed = 0;
  int t=0,d=0,v=0,dt=0,dd=0,dv=0;
  for(int i=0;i<tc;i++){    
    cin>>t>>d;
    (t-dt>0)?v=(d-dd)/(t-dt):v=0;
    maks_speed = max(v,maks_speed);
    dt = t;
    dd = d;
  }
  cout<<maks_speed;
  return 0;
}
#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  double s = (a+b+c+d)/2;
  double Area = sqrt((s-a)*(s-b)*(s-c)*(s-d));
  cout<<setprecision(10)<<Area;
  return 0;
}
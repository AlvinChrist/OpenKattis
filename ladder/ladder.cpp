#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int h,v;
    cin>>h>>v;
    cout<<ceil(h/sin(v*M_PI/180));
    return 0;
}
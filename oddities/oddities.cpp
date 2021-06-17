#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int tmp;
        cin>>tmp;
        (abs(tmp)%2==0)?cout<<tmp<<" is even\n":cout<<tmp<<" is odd\n";
    }
    return 0;
}
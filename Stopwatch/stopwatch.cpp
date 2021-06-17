#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc;
    int prev=0;
    int res=0;
    string output="";
    cin>>tc;
    for(int i=1;i<tc+1;i++){
        int now = 0;
        cin>>now;    
        (i%2==0)?(res+=now-prev):0;
        prev=now;
    }
    if(tc%2!=0){
        cout<<"still running";
    }
    else{
        cout<<res;
    }
    return 0;
}
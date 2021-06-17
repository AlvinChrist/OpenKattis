#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int wc,hc,ws,hs;
    cin>>wc>>hc>>ws>>hs;
    if(wc-ws>1){
        if(hc-hs>1){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}
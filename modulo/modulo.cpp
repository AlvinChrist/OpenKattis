#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int data[10];
    int counter = 0;
    for(int i=0;i<10;i++){
        int tmp;
        cin>>tmp;
        data[i]=tmp%42;
    }
    set<int> newset(begin(data),end(data));
    cout<<newset.size();
    return 0;
}
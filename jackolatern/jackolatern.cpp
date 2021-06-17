#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int result=1;
    for(int i=0;i<3;i++){
        int tmp;
        cin>>tmp;
        result *= tmp;
    }
    cout<<result;
    return 0;
}
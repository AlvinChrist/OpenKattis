#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    int res=0;
    cin>>n;
    for(n;n>0;n--){
        int tmp;
        cin>>tmp;
        (n!=1)?res+=tmp-1:res+=tmp;
    }
    cout<<res;
    return 0;
}
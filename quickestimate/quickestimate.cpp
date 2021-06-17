#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        cout<<tmp.size()<<'\n';
    }
    return 0;
}
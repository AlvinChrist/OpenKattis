#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N;
    float q,y,res;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>q>>y;
        res+=q*y;
    }
    cout<<res;
    return 0;
}
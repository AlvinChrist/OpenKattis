#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N=0,K=1;
    cin>>N;
    for(int i=0;i<N;i++){
        int buf=0,total=0;
        for(int j=0;j<K+1;j++){
            if(j==0){
                cin>>K;
            }
            else{
                cin>>buf;
                total+=buf;
            }
        }
        cout<<total-(K-1)<<endl;
    }
    return 0;
}
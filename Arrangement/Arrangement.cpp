#include <iostream>
#include <math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N,M;
    cin>>N>>M;
    for(N; N>0; N--){
        int teams = round((double)M/N);
        for(int i=0;i<teams;i++){
            cout<<'*';
        }
        cout<<'\n';
        M-=teams;
    }
    return 0;
}
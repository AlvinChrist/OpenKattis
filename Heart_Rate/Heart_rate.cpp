#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N=0,b=0;
    double p=0.0000;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>b>>p;
        cout<<(b-1)/p*60.0<<" "<<b/p*60.0<<" "<<(b+1)/p*60.0<<endl;
    }
    return 0;
}
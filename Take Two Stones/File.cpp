#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N = 0;
    while(cin>>N){
        (N%2==0)?cout<<"Bob"<<endl:cout<<"Alice"<<endl;
    }
    return 0;
}
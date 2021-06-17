#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N=0,P=0,power=0;
    unsigned long long int X=0;
    char buffer[5];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>P;
        sprintf(buffer,"%d",P);
        power = int(buffer[strlen(buffer)-1]-'0');
        buffer[strlen(buffer)-1]='\0';
        P = atoi(buffer);
        X+=pow(P,power);
        memset(buffer,sizeof(buffer),0);
    }   
    cout<<X;
    return 0;
}
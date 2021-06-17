#include <iostream>
#include <math.h>
using namespace std;


int sum_digit(int digit){
    int res=0;
    while(digit>0){
        res+=digit%10;
        digit/=10;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    unsigned int L=0,D=0,X=0;
    while(cin>>L>>D>>X){
        for(L;L<=D;L++){
            if(sum_digit(L)==X){
                cout<<L<<endl;
                break;
            }
        }
        for(D;D>=L;D--){  
            if(sum_digit(D)==X){
                cout<<D<<endl;
                break;
            }
        }
    }
    return 0;
}
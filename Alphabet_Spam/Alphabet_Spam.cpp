#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string message;
    cin>>message;
    int length=message.length();
    int data[4]={0,0,0,0};
    for(int i=0;i<length;i++){
        if((message[i]=='_')){
            data[0]++;
        }
        else if(islower(message[i])){
            data[1]++;
        }
        else if(isupper(message[i])){
            data[2]++;
        }
        else if(!isalpha(message[i])){
            data[3]++;
        }
    }
    cout<<fixed<<setprecision(16);
    for(int i=0;i<4;i++){
        cout<<(double)data[i]/length<<'\n';
    }
    return 0;
}
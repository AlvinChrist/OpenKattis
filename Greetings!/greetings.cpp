#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    const char* bye="Later!";
    const char* repl="Alligator!";
    string message;
    cin>>message;
    if(message[0]=='h'){
        cout<<'h';
        for(int i=0;i<(message.size()-2)*2;i++){
            cout<<'e';
        }
        cout<<'y'<<endl;
    }
    else if(message==bye){
        cout<<repl;
    }
    return 0;
}
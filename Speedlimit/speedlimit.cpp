#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n=0;
    while(cin>>n){
        if(n>0){
            int speed=0, time=0, prevTime=0, distance=0;
            for(;n>0;n--){
                cin>>speed>>time;
                distance += speed*(time-prevTime);
                prevTime = time;
            }
            cout<<distance<<" miles \n";
        }
        else{
            break;
        }
    }
    return 0;
}
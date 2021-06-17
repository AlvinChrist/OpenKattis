#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int L=0,events=0,current=0,p=0,not_allowed=0;
    cin>>L>>events;
    for(int i=0;i<events;i++){
        string action;
        cin>>action>>p;
        if(action=="enter"){     
            if(current+p<=L){
                current+=p;
            }
            else{
                not_allowed+=1;
            }
        }
        else{
            current-=p;
        }
    }
    cout<<not_allowed;
    return 0;
}
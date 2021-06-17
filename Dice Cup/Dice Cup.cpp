#include <iostream>
#include <algorithm>
using namespace std;

void foo(){}
int main(){
    ios_base::sync_with_stdio(false);
    int d1=0,d2=0;
    while(cin>>d1>>d2){
        if(d1==d2){
            cout<<d2+1<<endl;
        }
        else{
            (d1>d2)?swap(d1,d2):foo();
            d1++;
            for(d1;d1<=d2+1;d1++){
                cout<<d1<<endl;
            }
        }
    }
}
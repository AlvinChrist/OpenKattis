#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int x=0,y=0;
    while(cin>>x>>y){
        (x>0)?(y>0)?cout<<"1"<<endl:cout<<"4"<<endl:(y>0)?cout<<"2"<<endl:cout<<"3"<<endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string name="";
    string short_name="";
    char key='-';
    name.reserve(101);
    while(cin>>name){
        short_name+=name[0];
        for(int b=0;b<name.length();b++){
            if(name[b]==key){
                short_name+=name[b+1];
            }
        }
        cout<<short_name<<endl;
        name="";
        short_name="";
    }
}
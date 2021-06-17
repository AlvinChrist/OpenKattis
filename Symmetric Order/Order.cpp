#include <iostream>
#include <vector>
#include <string>
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc=0,count=1;
    string tmp;
    cin>>tc;
    while(tc!=0){
        vector<string> names;
        for(int i=0;i<tc;i++){
            cin>>tmp;
            names.pb(tmp);
        }
        cout<<"SET "<<count<<'\n';
        for(int i=0;i<tc;i++){
            if(i%2==0){
                cout<<names[i]<<"\n";
            }
        }
        for(int i=names.size()-1;i>=0;i--){
            if(i%2==1){
                cout<<names[i]<<"\n";
            }
        }
        count++;
        cin>>tc;
    }
    return 0;
}
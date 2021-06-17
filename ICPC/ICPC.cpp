#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    map<string,string> winner;
    string win[12];
    string univ,teamname;
    int cnt=0;
    bool stop = false;
    for(int i=0;i<n;i++){
        cin>>univ>>teamname;
        if(!stop){
            auto ptr = winner.insert(make_pair(univ,teamname));
            if(ptr.second){
                win[cnt]=univ+" "+teamname;
                cnt++;
            }
            if(cnt==12){
                stop=true;
            }
        }
    }
    for(int i=0;i<12;i++){
        cout<<win[i]<<'\n';
    }
    return 0;
}
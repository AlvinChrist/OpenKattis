#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int M=0,N=0;
    bool duplicate=false;
    char city[21];
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>N;
        vector<string> cities;
        for(int j=0;j<N;j++){
            cin>>city;
            for(int i=0;i<cities.size();i++){
                if(cities[i]==city){
                    duplicate=true;
                    break;
                }
            }
            if(duplicate){
                duplicate=false;
                continue;
            }
            else{
                cities.push_back(city);
            }
        }
        cout<<cities.size()<<endl;
    }
    return 0;
}
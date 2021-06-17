#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi_i;
typedef pair<int,bool> pi_b;
typedef map<int,bool> mb;
typedef map<int,int> mi;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    int m;
    cin>>m;
    for(int c=1;c<=m;++c){
        int n;
        cin>>n;
        int number_list[1001];
        for(int i=0;i<n;++i){
            cin>>number_list[i];
        }
        sort(number_list,number_list+n);
        for(int i=0;i<n;i+=2){
            if(number_list[i]!=number_list[i+1]){
                cout<<"Case #"<<c<<": "<<number_list[i]<<'\n';
                break;
            }
            else{
                if(i==(n-3)){
                    cout<<"Case #"<<c<<": "<<number_list[i+2]<<'\n';
                    break;
                }
            }
        }
    }
    return 0;
}
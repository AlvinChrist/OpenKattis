#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void foo(){

}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int a,b,c;
        cin>>a>>b>>c;
        (a<b)?swap(a,b):foo();
        if(a+b==c){
            cout<<"Possible\n";
        }
        else if(a-b==c){
            cout<<"Possible\n";
        }
        else if(b*c==a){
            cout<<"Possible\n";
        }
        else if(a*b==c){
            cout<<"Possible\n";
        }
        else{
            cout<<"Impossible\n";
        }
    }
    return 0;
}
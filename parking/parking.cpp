#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    int t;    
    cin>>t;
    for(t;t>0;--t){
        int n;
        int p_site[101];
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>p_site[i];
        }
        sort(p_site,p_site+n);
        int res=0;
        for(int i=1;i<n;i++){
            res+=p_site[i]-p_site[i-1];
        }
        cout<<res*2<<'\n';
    }
    return 0;
}
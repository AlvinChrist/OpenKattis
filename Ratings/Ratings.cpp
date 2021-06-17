#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int main(){
    //ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    float min=0.0;
    float max=0.0;
    for(int i=0;i<k;++i){
        float tmp;
        scanf("%f",&tmp);
        min+=tmp;
        max+=tmp;
    }
    int delta = n-k;
    min+=(-3*delta);
    max+=(3*delta);    
    printf("%0.4f %0.4f",min/n,max/n);
    return 0;
}
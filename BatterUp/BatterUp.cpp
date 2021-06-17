#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,sum;
    cin>>n;
    int at_bats=n;
    int bat[n];
    for(int i=0;i<n;i++){
        cin>>bat[i];
        if(bat[i]>=0){
            sum+=bat[i];
        }
        else{
            at_bats--;
        }
    }
    cout.precision(9);
    cout<<sum/(float)at_bats<<endl;
    return 0;
}
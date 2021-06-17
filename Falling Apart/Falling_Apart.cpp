#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    int alice=0;
    int bob=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        if(i%2==0){
            alice+=arr[i];
        }
        else{
            bob+=arr[i];
        }
    }
    cout<<alice<<" "<<bob;
    return 0;
}

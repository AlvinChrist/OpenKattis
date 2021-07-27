#include <iostream>

using namespace std;

int arr[100005] = {0};
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i = n-1; i>=0 ; i--) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\n';
    }
    return 0;
}
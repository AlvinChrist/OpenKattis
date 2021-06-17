#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n=0,score=0;
    char _ans=(char)0;
    cin>>n;
    for(int i=0;i<n;i++){
        char ans=(char)0;
        cin>>ans;
        (_ans==ans)?score++:_ans=ans;

    }
    cout<<score<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    string mon;
    cin>>mon;
    int date;
    cin>>date;
    if(mon=="DEC" && date==25){
        cout<<"yup";
    }
    else if(mon=="OCT" && date==31){
        cout<<"yup";
    }
    else{
        cout<<"nope";
    }
    return 0;
}
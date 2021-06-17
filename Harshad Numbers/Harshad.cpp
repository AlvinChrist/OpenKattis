#include <iostream>

using namespace std;

int sum_digit(unsigned long int digit){
    unsigned int res=0;
    while(true){
        if(digit!=0){
            unsigned int mod=0;
            mod = digit%10;
            res+=mod;
            digit = (digit-mod)/10;
        }
        else{
            break;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    unsigned long int n=0;
    while(cin>>n){
        while(n%sum_digit(n)!=0){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
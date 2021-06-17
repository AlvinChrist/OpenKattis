#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    string card;
    cin>>card;
    set<char> myset(begin(card),end(card));
    (card.size()==myset.size())?cout<<'1':cout<<'0';
    return 0;
}
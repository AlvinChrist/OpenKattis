#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int tc=5;
  string input;
  map<char,int> card_hand;
  while(tc--){
    string shuffle;
    cin>>shuffle;
    card_hand[shuffle[0]]++;
  }
  int strength = 0;
  for(auto it = card_hand.begin();it != card_hand.end(); it++){
    strength = max(strength,it->second);
  }
  cout<<strength;
  return 0;
}
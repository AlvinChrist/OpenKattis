#include <bits/stdc++.h>

using namespace std;
vector<string> str_list;
set<string> str_set;

int main(){
  ios_base::sync_with_stdio(false);
  string tmp;
  getline(cin,tmp);
  stringstream ss(tmp);
  string word;
  while(ss >> word){
    str_list.push_back(word);
    str_set.insert(word);
    if(str_list.size() != str_set.size()){
      cout << "no";
      return 0;
    }
  }
  cout << "yes";
  return 0;
}
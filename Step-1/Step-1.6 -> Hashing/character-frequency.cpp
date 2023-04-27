#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;

  //precompute
  // int hashh[256] = {0};
  // for(int i=0;i<s.size();i++) {
  //   hashh[s[i]]++;
  // }

  //usign map
  unordered_map<char,int> mpp;
  for(int i=0;i<s.size();i++) {
    mpp[s[i]]++;
  }
  for(auto it:mpp){
    cout<<it.first<<" -> "<<it.second<<endl;
  }

  // int q;
  // cin>>q;
  // while(q--) {
  //   char ch;
  //   cin>>ch;
  //   cout<<mpp[ch]<<endl;

  // }
}
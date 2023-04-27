#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ls;
  int n;
  cin>>n;
  for(int i=1;i<=sqrt(n);i++) {
    if (n%i == 0) {
      ls.push_back(i);
      if ((n/i) != i){
        ls.push_back(n/i);
      }
    }
    
  }
  sort(ls.begin(),ls.end());

  for(auto x:ls) cout<<x<<" ";
  cout<<endl;
}
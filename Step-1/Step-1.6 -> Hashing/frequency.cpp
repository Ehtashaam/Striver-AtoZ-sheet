#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  //precompute
  // int hashh[13] = {0};
  // for(int i=0;i<n;i++) {
  //   hashh[arr[i]]++;
  // }

  //using map
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++) {
    mpp[arr[i]]++;
  }
  for(auto it:mpp){
    cout<<it.first<<" -> "<<it.second<<endl;
  }

  int q;
  cin>>q;
  int number;
  while(q--) {
    cin>>number; 
    //fetch
    cout<<mpp[number]<<endl;
  }
  
  return 0;
}
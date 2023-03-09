#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int> &ds, int arr[], int n) {
    //base case
    if(ind == n) {
        for(auto it : ds) {
            cout<<it<<" ";
        }
        if(ds.size()==0) {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //add
    ds.push_back(arr[ind]);
    //take
    printF(ind+1,ds,arr,n);
    //remove
    ds.pop_back();
    //not take
    printF(ind+1,ds,arr,n);
}
int main() {

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    vector<int> ds;
    printF(0,ds,arr,n);
    return 0;
}
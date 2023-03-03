#include<bits/stdc++.h>
using namespace std;
int main() {

    pair<int,int> p = {1,3};
    //cout<<p.first<<" "<<p.second<<endl;

    //nested pair {{1,3},4}
    pair<pair<int,int>,int> q = {{1,3},4};
    //cout<<q.first.first<<" "<<q.first.second<<" "<<q.second<<endl; 
    return 0;

    //array of pair
    pair<int,int> arr[] = {{1,2},{3,4}};

    cout<<arr[0].first;
}
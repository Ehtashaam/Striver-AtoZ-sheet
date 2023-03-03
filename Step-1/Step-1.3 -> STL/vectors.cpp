#include<bits/stdc++.h>
using namespace std;
int main() {

    vector<int> v1;
    vector<char> v2;
    vector<string> v3;

    v1.push_back(1);
    v1.emplace_back(2);
    for(int x:v1)
        cout<<x<<" ";
    cout<<endl;

    cout<<v1[0]<<" "<<v1.at(1)<<endl;

    // -> pair of vectors
    vector<pair<int,int>> v4;
    v4.push_back({1,2});
    v4.emplace_back(3,4);
    
    // -> vector with predefined values
    vector<int> v5(5,100); //5 instances of 100 will be created
    for(int x:v5)
        cout<<x<<" ";
    cout<<endl;

    vector<int> v6(5); //5 instances of 0 will be created 
    for(int x:v6)
        cout<<x<<" ";
    cout<<endl;

    // -> copy another vector 
    vector<int> v7(v5);


    // -> iterators

    vector<int> v8 = {20,10,30,6,7};
    vector<int>::iterator it = v8.begin();
    cout<<*(it)<<endl;

    for(vector<int>::iterator it=v8.begin();it!=v8.end();it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it = v8.begin(); it != v8.end(); it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it:v8){
        cout<<it<<" ";
    }
    cout<<endl;


    //erase
    vector<int> v9 = {10,20,12,23,35};
    v9.erase(v9.begin()); //{20,12,23,35}

    v9.erase(v9.begin()+1,v9.begin()+3); //{10,23,35}
    for(auto it : v9)
        cout<<it<<" ";
    cout<<endl;


    //insert
    vector<int>v10(2, 100); // {100, 100}
    v10.insert(v10.begin(), 300); // {300, 100, 100};
    v10.insert(v10.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    cout<<v9.size()<<endl;

    v9.pop_back();
    for(auto it : v9)
        cout<<it<<" ";
    cout<<endl;

    //swap
    vector<int> v11 = {10, 20};
    vector<int> v12 = {30, 40};
    v11.swap(v12); // v1 -> {30, 40} , v2 -> {10, 20}

    for(auto x : v11)
        cout<<x<<" ";
    cout<<endl;
    for(auto x : v12)
        cout<<x<<" ";
    cout<<endl;

    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main() {

    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(1);
    ls.emplace_front(0);

    ls.reverse();
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    //rest function same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap



    return 0;
}
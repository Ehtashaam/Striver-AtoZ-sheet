#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    //base case
    if (n == 0) return;

    //recursive case
    cout<<"Ehtashaam"<<endl;
    print(--n);

}
int main() {
    int n;
    cin >> n;
    print(n);
     
    return 0;
}

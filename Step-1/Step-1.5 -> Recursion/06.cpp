#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    //base case
    if ( n == 0) return 1;

    return n * factorial(n-1);
}
int main() {

    int n;
    cin>>n;
    cout<<"Fatorial of " << n << " --> " <<factorial(n) << endl;
    return 0;
}
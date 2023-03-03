#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    //base case
    if (n == 1) return 1;

    return n + sum(n-1);

}
int main() {

    int n;
    cin>>n;
    cout<<"Sum of first " << n << " natural numbers -> " << sum(n) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    
    for (int i=1; i<=n; i++) {

        //numbers
        for(int j=1; j<=i; j++) {
            cout<<j;
        }

        //space
        for(int space = 1; space<=2*(n-i); space++) {
            cout<<" ";
        }
        //numbers
        for(int j=i; j>=1; j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
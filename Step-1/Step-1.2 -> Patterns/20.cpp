#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    
    for(int i=1; i<=2*n-1; i++) {
        int stars = i;
        int space = 2*(n-i);

        if (i>n) {
            stars = 2*n-i;
            space = 2*(i-n);
        }
        //stars
        for(int j=1; j<=stars; j++) {
            cout<<"*";
        }
        //space
        for(int sp=1; sp<=space; sp++) {
            cout<<" ";
        }
        //stars
        for(int j=stars; j>=1; j--) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
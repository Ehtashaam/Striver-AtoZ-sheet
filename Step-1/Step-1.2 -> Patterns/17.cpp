#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++) {
        //space
        for(int space=1; space<=(n-i); space++) {
            cout<<" ";
        }
        char ch = 'A';
        for(int j=1; j<=2*i-1; j++) {
            cout<<ch;
            if(j<i) ch++;
            else ch--;
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++) {
        char start_ch = 'A' + n - i;
        for(int j=1; j<=i; j++) {
            cout<<start_ch;
            start_ch++;
        }
        cout<<endl;
    }
    
    return 0;
}
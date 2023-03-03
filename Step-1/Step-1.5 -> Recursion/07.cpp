#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int n) {

    //base case
    if (i >= n/2) return ;

    swap(arr[i] , arr[n-1-i]);
    reverse(arr , i+1 , n);
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n; i++)
        cin >> arr[i];
    reverse(arr, 0 , n);

    for(auto x : arr)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
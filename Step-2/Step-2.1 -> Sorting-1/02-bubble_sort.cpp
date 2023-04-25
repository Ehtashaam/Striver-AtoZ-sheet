#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int *a,int n)
{
  int swapped;
  for(int i=0;i<n;i++) {
    swapped = 0;
    for(int j=0;j<n-i-1;j++) {
      if (a[j] > a[j+1]) {
        swap(a[j],a[j+1]);
        swapped = 1;
      }
    }
    if (swapped == 0) break;
  }
}


int main() 
{
  int n,a[100000];
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  bubble_sort(a,n);

   for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;

}
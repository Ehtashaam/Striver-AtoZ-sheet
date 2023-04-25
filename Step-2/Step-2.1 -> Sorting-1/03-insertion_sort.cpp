#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int *a,int n)
{
  for(int i=1;i<n;i++) {
    int temp = a[i];
    int j = i-1;
    while(j>=0 and a[j]>temp) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }
}


int main() 
{
  int n,a[100000];
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  insertion_sort(a,n);

   for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;

}
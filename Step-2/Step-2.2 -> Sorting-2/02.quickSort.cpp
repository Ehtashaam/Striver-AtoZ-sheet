#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high) 
{
  int pivot = arr[low];
  int i = low;
  int j = high;
  while(i<j) {
    while(arr[i] <= pivot && i<=high-1) {
      i++;
    }
    while(arr[j] > pivot and j>=low+1) {
      j--;
    }
    if (i<j)
      swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;
}


void quickSort(vector<int> &arr,int low, int high)
{
  if (low < high) {
    int pIndex = partition(arr,low,high);
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
  }
}


int main() 
{
  vector<int> arr;
  int n, value;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin>>value;
    arr.push_back(value);
  }

  quickSort(arr,0,n-1);

  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }

  // for(auto x: arr)
  //   cout<<x<<" ";
      
  cout<<endl;
  return 0;
}
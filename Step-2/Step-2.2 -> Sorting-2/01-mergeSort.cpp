#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) 
{
  vector<int> temp; //creating temporary array to store values in sorted order after merging

  int left = low;
  int right = mid + 1;

  while (left <= mid and right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }
  while(right <= high) {
    temp.push_back(arr[right]);
    right++;
  }
  //copy elements from temp array to original array
  for(int i=low; i<=high;i++) {
    arr[i] = temp[i-low];
  }
}

void mergeSort(vector<int> &arr,int low,int high)
{
  //base case
  if (low >= high) return;

  int mid = (low + high) / 2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
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

  mergeSort(arr,0,n-1);

  // for(int i=0;i<n;i++) {
  //   cout<<arr[i]<<" ";
  // }
  for(auto x: arr)
    cout<<x<<" ";
  cout<<endl;
  return 0;
}
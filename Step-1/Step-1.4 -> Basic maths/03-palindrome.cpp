#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int temp = n;
  int reverse = 0;
  while(n>0) {
    int ld = n%10;
    reverse = reverse * 10 + ld;
    n = n / 10; 
  }
  if (temp == reverse) cout<<"true";
  else  cout<<"false";
  cout<<endl;
  return 0;
}
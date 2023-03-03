#include<iostream>
using namespace std;
bool checkPalindrome(int i,string &s) {
    //base condition
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return checkPalindrome(i+1,s);
}
int main() {
    string s;
    getline(cin,s);
    if(checkPalindrome(0,s))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;
    return 0;
}
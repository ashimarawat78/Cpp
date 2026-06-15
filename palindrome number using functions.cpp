#include<iostream>
using namespace std;
void palindrome(int n){
    int ans=0;
    int original = n;
    while(n>0){
        int digit= n%10;
        ans= ans*10+ digit;
        n=n/10;
    }
    if( ans == original){
        cout<<" is palindrome";
    }else{
        cout<<" not a palindrome";
    }
}
int main(){
    int n;
    cout<<" enter the value:";
    cin>> n;
    palindrome(n);
    return 0;
}

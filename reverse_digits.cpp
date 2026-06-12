#include<iostream>
using namespace std;
int main (){
  int n, digit , ans=0;
 cout<<" enter the value:";
 cin>> n;
 while(n>0){
     digit =n%10;
     ans=(ans*10)+ digit ;
     n=n/10;
 }
 cout<<" the number in reverse is :"<< ans;
 return 0;
}

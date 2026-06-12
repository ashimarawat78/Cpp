#include<iostream>
using namespace std;
int main (){
  int n, digit , product=1;
  cout<<" enter the value:";
  cin>> n;
  while(n>0){
      digit = n%10;
      product= product * digit;
      n = n/10;
  }
  cout<<" the product is :"<< product<<" ";
  return 0;
}

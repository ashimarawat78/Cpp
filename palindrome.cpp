#include<iostream>
using namespace std;
 int main (){
     int n, rev =0, rem, temp;
     cout<< " enter the number =";
     cin>> n;
     temp =n;
     while (n>0){
         rem = n%10;
         rev =rev * 10+ rem;
      n =n/10;
     }
     if (temp == n){
         cout<<" palindrome";
     }else{
         cout<<" not a palindrome";
     }
     return 0;
 }

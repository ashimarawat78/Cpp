#include<iostream>
using namespace std;
void isArmstrong(int n ){
    int original =n;
    int sum =0;
    while(n>0){
        int digit = n%10;
        sum = sum + digit * digit * digit;
        n =n / 10;
}
if( original == sum ){
    cout<<" is an armstrong";
}else{
    cout<<" not am armstrong";
}

    }
int main (){
    int n;
    cout<<" enter the value :";
    cin>> n;
 isArmstrong(n);
    return 0;
}

#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main (){
    int n;
    cout<<" enter the value of the number u want square of:";
    cin>> n;
    cout<< square(n);
    return 0;
}

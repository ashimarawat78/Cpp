#include<iostream>
using namespace std;
int  check(int n){
    if (n%2==0){
        cout<<" the number is even"<<endl  ;
    }else{
        cout<<" the number is odd"<<endl;
    }
    return n;
};
int main (){
    int n;
    cout<<" enter the value :";
    cin>> n;
    cout<< check(n);
    return 0;
}

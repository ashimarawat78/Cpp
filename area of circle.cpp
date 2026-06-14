#include<iostream>
using namespace std;
float area(float r){
    return 3.14*r*r ;
}
int main(){
    float r;
    cout<<" enter the value:";
    cin>> r;
    cout<< area(r);
    return 0;
}

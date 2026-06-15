#include<iostream>
using namespace std;
int GCD(int a, int b){
    int ans=0;
    for(int i=1; i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
}
int main (){
    int a ,b;
    cout<<" enter the two values:";
    cin>> a >> b;
    cout<< GCD(a,b);
    return 0;
}

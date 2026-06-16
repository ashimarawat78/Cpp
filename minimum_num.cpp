#include<iostream>
using namespace std;
float minimum(float a, float b){
    if (a<b){
        return a;
    }else{
        return b;
    }
};
int main(){
    float a, b;
    cout<<" enter the two values:"<< endl;
    cin>> a>> b;
    cout<<" the minimum value is:"<< minimum( a, b);
    return 0;
    
}

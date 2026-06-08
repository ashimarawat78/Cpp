#include<iostream>
using namespace std;
int main(){
int arr[5]={ 8,6,7,4,2};
for( int i=0; i<5; i++){
cout<< arr[i]<<endl;
}
int sum=0;
for(int i=0; i<5;i++){
    sum =sum + arr[i];
}
cout<< sum;
return 0;
}

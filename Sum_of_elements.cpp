#include<iostream>
using namespace std;
int total(int arr[], int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={4,3,5,2,6};
    int n=5;
    int sum= total(arr, n);
    cout<<" the total of all elements is:"<<sum;
    return 0;
}

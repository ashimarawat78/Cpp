#include<iostream>
using namespace std;
int total(int arr[], int n){
    int sum =0;
   float average=0;
    for (int i=0;i<n;i++){
        sum = sum+arr[i];
       
    }
    average= sum/n;
    return average;
}
int main(){
    int arr[5]={4,3,5,2,6};
    int n=5;
   float average= total(arr, n);
    cout<<" the average of all elements is:"<<average;
    return 0;
}

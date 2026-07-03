#include<iostream>
using namespace std;
int largest(int arr[], int n){
    int large= arr[0];
 
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large= arr[i];
            large++;
        }
        }
        return large ;
    }
    int main(){
        int arr[5]={5,3,6,7,2};
        int n=5;
        int largestNumber= largest(arr, n);
        cout<<" the largest number is:"<<largestNumber;
        return 0;
    }

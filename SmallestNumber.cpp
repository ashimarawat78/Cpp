#include<iostream>
using namespace std;
int smallest(int arr[], int n){
    int small= arr[0];
 
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small= arr[i];
         
        }
        }
        return small;
    }
    int main(){
        int arr[5]={5,3,6,7,2};
        int n=5;
        int smallestNumber= smallest(arr, n);
        cout<<" the smallest number is:"<<smallestNumber;
        return 0;
    }

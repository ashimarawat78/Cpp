#include<iostream>
using namespace std;
void Sorting(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    }
    int main(){
        int arr[5]={5,7,3,8,9};
        int n=5;
        Sorting(arr,n);
        cout<<"Sorted array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }

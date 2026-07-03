#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int maxIndex=i;
        for(int j=i+1;j<n;j++){
           if(arr[j]>arr[maxIndex]){
               maxIndex=j;
           }
        }
        swap(arr[i],arr[maxIndex]);
    }
 
}
int main(){
    int arr[5]={22,33,43,11,55};
    int n=5;
     SelectionSort(arr, n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}

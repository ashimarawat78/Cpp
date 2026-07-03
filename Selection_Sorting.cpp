#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
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
    int arr[5]={22,33,43,11,55};
    int n=5;
     SelectionSort(arr, n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}

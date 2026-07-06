#include<iostream>
using namespace std;
void Selection(int arr[], int n){
   for(int i=0;i<n-1;i++){
       int minIndex=i;
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[minIndex]){
               minIndex= j;
           }
       }
       swap(arr[i],arr[minIndex]);
   }
}
int main(){
    int arr[5]={3,4,2,7,5};
    int n=5;
    Selection(arr , n);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" "<<endl;
         }
         cout<<"the 3rd smallest number is:"<<arr[2];
         return 0;
}

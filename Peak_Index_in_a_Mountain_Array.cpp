#include<iostream>
using namespace std;
int Peakindex(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid= start+(end- start)/2;
    while(start< end){
        if(arr[mid]<arr[mid+1]){
            start= mid+1;
        }else{
            end = mid;
        }
         mid= start+(end- start)/2;
    }
    return start;
}
int main(){
    int arr[6]={3,5,7,9,3,2};
    int index= Peakindex(arr,6);
    cout<<" the index of the peak number is:"<<index<<endl;
    cout<<" Peak element is:"<< arr[index];
    return 0;
    
}

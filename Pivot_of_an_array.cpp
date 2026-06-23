#include<iostream>
using namespace std;
int Pivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid= start+(end- start)/2;
    while(start< end){
        if(arr[mid]>=arr[0]){
            start= mid+1;
        }else{
            end = mid;
        }
         mid= start+(end- start)/2;
    }
    return start;
}
int main(){
    int arr[6]={18,19,3,4,10,15};
    int index= Pivot(arr,6);
    cout<<" the index of the pivot number is:"<<index<<endl;
    cout<<" Pivot element is:"<< arr[index];
    return 0;
    
}

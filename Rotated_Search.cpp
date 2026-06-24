#include<iostream>
using namespace std;
int Pivot(int arr[],int size){
    int start= 0;
    int end= size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start= mid+1;
        }else{
            end=mid;
        }
         mid=start+(end-start)/2;
    }
    return start;
}
int BinarySearch(int arr[],int start, int end, int key){
int mid=start+(end-start)/2;
while(start<=end){
    if(arr[mid]==key){
        return arr[mid];
        }
        else if(arr[mid]<key){
            start= mid+1;
        }else{
            end= mid-1;
        }
        mid=start+(end-start)/2;
}
return -1;
}
int Rotated(int arr[], int size, int key){
    int pivot= Pivot(arr, size);
    if(arr[pivot]<=key&&key<=arr[size-1]){
        return BinarySearch(arr,pivot,size-1, key);
    }else{
        return BinarySearch(arr,0,pivot-1,key);
    }
}
int main(){
 int arr[5] = {7, 9, 1, 2, 3};
 int index=Rotated(arr,5,2);
 cout<<" The index is:"<<index;
 return 0;
}

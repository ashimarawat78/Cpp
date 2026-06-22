#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int start= 0;
    int end=size-1;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }else if(key> arr[mid]){
            start= mid+1;
        }else{
            end= mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}


int main () {
   int arr[7] = {1,3,5,5,5,7,9};
   int index= binary(arr,7,5);
   cout<<" the index of the number which came first is ="<<index;
   return 0;
}

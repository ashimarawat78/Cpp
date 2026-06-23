#include<iostream>
using namespace std;
int lastocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans =-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
   start= mid+1;
        }else if(arr[mid]<key){
            start= mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
   int arr [7]= {1, 3, 5, 5, 5, 7, 9};
   int index=lastocc(arr,7,5);
   cout<<" the index of the element is:"<<index<<endl;
   cout<<" the element is:"<<arr[index];
   return 0;
}

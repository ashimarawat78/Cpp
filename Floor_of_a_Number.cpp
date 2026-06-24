#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size ,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }else if(arr[mid]< key){
            ans= arr[mid];
               start= mid+1;
       
        }else{
              end= mid-1;
        }
      mid= start+(end-start)/2;
    }
      return ans;
    }
    int main(){
        int arr[5]={2, 4, 6, 8, 10};
        int element= BinarySearch(arr,5,5);
cout<<" the element is "<<element <<endl;
return 0;
    }

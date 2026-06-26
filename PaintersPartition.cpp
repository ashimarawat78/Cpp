#include<iostream>
using namespace std;
bool possible(int arr[], int n, int k, int mid){
    int painterCount=1;
    int boardsum=0;
    for(int i=0;i<n;i++){
        if(boardsum + arr[i]<= mid ){
           boardsum+=arr[i];
        }else{
            painterCount++;
            if(painterCount>k || arr[i]>mid){
                return false;
            }
            boardsum= arr[i];
        }
    }
    return true;
}
int binary(int arr[], int n, int k){
    int start= 0;
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans= -1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(possible(arr, n, k, mid)){
            ans= mid;
            end= mid-1;
        }
        else{
            start= mid+1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[4]={5,5,5,5};
    int n=4;
    int k=2;
    int Minimum = binary(arr,n,k);
    cout<<" the Minimum value is:"<< Minimum;
    return 0;
}

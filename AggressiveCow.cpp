#include<iostream>
#include<algorithm>
using namespace std;
bool possible(int arr[], int n, int m, int mid){
    int cowCount= 1;
    int lastpos= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-lastpos >=mid){
          cowCount++;
          lastpos= arr[i];
        }
        if(cowCount==m){
            return true;
        }
    }
    return false;
}
int AggCow(int arr[],int n, int m){
   sort(arr, arr+n);
    int start= 0;
    int end=arr[n-1]-arr[0];
    int ans= -1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(possible(arr, n, m, mid)){
            ans=mid;
            start= mid+1;
        }else{
            end= mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
 int main (){
     int arr[5]={4,2,1,3,6};
     int n= 5;
     int m=2;
     int Maximum= AggCow(arr, n, m);
     cout<<"The Maximum is :"<<Maximum;
     return 0;
 }

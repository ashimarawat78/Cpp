#include<iostream>
using namespace std;
int Pivot(int arr[],int size){
    int start= 0;
    int end= size-1;
    int mid= start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start= mid+1;
        }else{
            end= mid;
        }
         mid= start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[6]= {15, 18, 2, 3, 6, 12};
    int Rotation= Pivot(arr,6);
    cout<<"the total no.of rotations is: "<<Rotation<<endl;
    return 0;
}

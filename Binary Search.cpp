#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size, int key) {
    int start= 0;
    int end= size-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end= mid-1;
        }
        mid = start+(end-start)/2;
        }
        return -1;
}
int main (){
    int even[6]={3,4,5,6,7,8};
    int odd[5]={2,4,16,18,19};
    int evenindex= Binarysearch(  even,6,6);
    cout<<" the index is :"<<evenindex<<endl;
     int oddindex= Binarysearch( odd,5,6);
    cout<<" the index is :"<<oddindex<<endl;
    return 0;
    
    
}

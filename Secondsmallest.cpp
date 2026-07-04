#include<iostream>
using namespace std;
int Secondsmallest(int arr[], int n){
    int smallest =arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second= smallest;
            smallest= arr[i];
        }else if(arr[i]<second && arr[i]>smallest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int arr[5]={4,6,3,7,2};
    int n=5;
    int second = Secondsmallest(arr, n);
    cout<<" the second most smallest number is :"<< second;
    return 0;
}

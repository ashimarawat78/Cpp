#include<iostream>
using namespace std;
int secondLargest(int arr[], int n){
    int largest =arr[0];
    int second = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }else if(arr[i]> second && arr[i]!= largest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int arr[]={ 1,2,3,4,5};
    int size=5;
    cout<<" the second largest number is :"<<  secondLargest( arr, size)<< endl;
    return 0;

}

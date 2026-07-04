#include<iostream>
using namespace std;
int Secondlargest(int arr[], int n){
    int largest =arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second= largest;
            largest= arr[i];
        }else if(arr[i]>second && arr[i]< largest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int arr[5]={4,6,3,7,2};
    int n=5;
    int second = Secondlargest(arr, n);
    cout<<" the second most largest number is :"<< second;
    return 0;
}

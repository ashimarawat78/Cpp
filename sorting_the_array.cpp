#include<iostream>
using namespace std;
bool ascending(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
        }
        return true;
    }
   
int main(){
    int arr[5]={4,5,7,6,8};
    int n=5;
    int AscendingNumber= ascending(arr, n);
    cout<<" is it sorted or not:"<< AscendingNumber;
    return 0;
}

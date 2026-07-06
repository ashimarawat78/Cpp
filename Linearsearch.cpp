#include<iostream>
using namespace std;
int linear(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5]={4,2,7,5,8};
    int n=5;
    int key= 5;
    int search= linear(arr, n, key);
    cout<<" the targeted number's index  is :"<<search;
    return 0;
}

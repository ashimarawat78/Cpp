#include<iostream>
using namespace std;
int frequency(int arr[],int n, int target ){
    int count =0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[5]={2,4,3,3,1};
    int n=5;
    int occurence= frequency(arr, n, 2);
    cout<<" total occurence of a number:"<< occurence;
    return 0;
}

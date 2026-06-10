#include<iostream>
using namespace std;
int main(){
    int arr[6] = {2, 5, 8, 7, 10, 3};
   
    int sum=0;
    int i;
    for(int i=0; i<6; i++){
        if(arr[i]%2==0){
        cout<< arr[i]<<" ";
         sum=sum+arr[i];
         }
    }
    cout<<" sum is:"<< sum ;
    return 0;
      }

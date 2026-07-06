#include<iostream>
using namespace std;
void Number(int arr[], int n){
    int max=arr[0];
    int min =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
              }  
      if(arr[i]<min ){
        min= arr[i];
      } 
}
        cout<<" the maximum number is:"<< max<< endl;
          cout<<" the minimum number is :"<< min;
}
int main(){
    int arr[5]={1,2,3,4,6};
    int n=5;
    Number (arr, n);
    return 0;
}

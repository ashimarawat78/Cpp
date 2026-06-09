#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,5,7,8,9,4};
    int sum =0;
    int i=0;
 for(int i=0;i<6;i++){
     if (arr[i]%2!=0){
         cout<< arr[i];
         sum =sum +arr[i];
     }
      }
    cout<< " sum is :"<<sum ;
 return 0;
 
}

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {9, 3, 7, 1, 5};
    int smallest = arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
                       }
    }
    cout<<" the smallest no is:"<< smallest<<" ";
    return 0;
      }

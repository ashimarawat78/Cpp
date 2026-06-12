#include<iostream>
using namespace std;
int main(){
    int arr[7] = {5, 12, 8, 15, 3, 20, 7};
    int count=0;
    int i=0;
 for(int i=0;i<7;i++){
     if (arr[i]>10){
        count++;
        }
      }
    cout<< count;
 return 0;
 
}

#include<iostream>
using namespace std;
int frequency(int arr[], int n, int key){
    int ans=0;
int digit =1;
    for(int i=0;i<n;i++){
        if(arr[i]== key){
            ans = ans +1;
        }
         }
    return ans;
}
int main (){
    int arr[]={1,1,1,2,3,2};
    int size=6;
    int key;
    cout<<" enter the value :";
    cin>> key;
    cout<<" the frequency of the number is :"<< frequency(arr,size,key)<< endl;
    return 0;
}

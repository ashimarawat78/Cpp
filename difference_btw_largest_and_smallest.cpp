#include<iostream>
using namespace std;
int main(){
   int arr[5] = {12, 4, 19, 7, 10};
 int largest=arr[0];
 int smallest=arr[0];
 int difference;
 int i=0;
 for(int i=0; i<5;i++){
      if (arr[i]>largest) {
     largest=arr[i];
     cout<<" largest no is:"<< largest <<endl;
      }
      else if (arr[i]<smallest) {
         smallest= arr[i];
         cout<<" smallest no is:"<< smallest << endl ;
     }
 }
 
 difference=largest - smallest;
 cout<< " difference is :"<<difference ;
 return 0;
}

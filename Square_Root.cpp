#include<iostream>
using namespace std;
int SquareRoot(int n){
    int start=0;
    int end=n;
    int ans=-1;
    int mid= start+(end-start)/2;
  
    while(start<=end){
          int square= mid*mid;
        if(square==n){
            return mid;
        }else if(square<n){
            ans= mid;
            start= mid+1;
             
            
        }else{
                 end= mid-1;
        }
         mid= start+(end-start)/2;
        }
        return ans;
    }
    int main(){
        int n= 36;
        cout<<" THE SQUARE ROOT OF THE NUMBER IS :"<<SquareRoot(n)<<endl;
       return 0;
    }

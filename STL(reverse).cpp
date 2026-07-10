#include<iostream>
#include<vector>
using namespace std;
void Vector(vector<int> &v){
    int s=0;
    int e= v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
  
}
int main(){
    vector <int> v;
    v.push_back(10);
     v.push_back(20);
      v.push_back(30);
       v.push_back(40);
       
       Vector(v );
       for(int i=0;i<v.size(); i++){
           cout<< v[i]<<" ";
       }
       return 0;
}
   

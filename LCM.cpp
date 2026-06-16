#inlude<iostream>
using namespace std;
#include<iostream>
using namespace std;
int GCD(int a, int b, int c){
int ans;
for(int i=1; i<=a&&i<=b&&i<=c;i++){
if(a%i==0&& b%i==0&& c%i==0){
    ans = i;
}
}
return ans ;
}
int LCM(int a, int b,int c){
    return (a*b*c)/ GCD(a,b,c);
}
int main (){
    int a,b,c;
    cout<<" enter the three values:";
    cin>>a>>b>> c;
    cout<< LCM(a,b,c);
    return 0;
}

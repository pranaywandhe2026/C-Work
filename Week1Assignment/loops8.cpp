#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
   int a=1,b=1,sum=0;
   cout<<a<<" "<<b<<" ";
   for(int i=3;i<=n;i++){
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
   }
    
}
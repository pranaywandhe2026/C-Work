#include<iostream.h>
using namespace std;
int main(){
   int n;
   cout<<"n=";
   cin>>n;
   int sum=0;
   int reverse=0;
   while(n>0){
      sum+=n%10;
       reverse*=10;
       reverse+=n%10;
       
      n=n/10;
     
     
      
   }
   cout<<sum<<endl;
   cout<<reverse<<endl;
      
   
   
}
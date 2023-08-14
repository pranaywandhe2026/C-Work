#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int remainder;
    int reverse=0;
    int sum=0;
    while(n>0){
       remainder=n%10;
       reverse=remainder*10;
        reverse=
       sum+=remainder;
       n=n/10;
    }
    cout<<sum;
    cout<<reverse;
    
}
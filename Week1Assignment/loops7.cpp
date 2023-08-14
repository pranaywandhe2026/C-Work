#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        b=sum;
        a=b;
        cout<<sum;
    }
    
}
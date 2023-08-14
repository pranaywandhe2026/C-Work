#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        cout<<"enter element=";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];

    }
    int s=n*(n+1)/2;
    cout<<sum-s;
    
}
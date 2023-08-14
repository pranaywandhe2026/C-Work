#include<iostream.h>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    float a=100;
    int i=1;
    while(i<=n){
        cout<<setprecision(2)<<a<<endl;
        a=a/2;
        i++;
    }
}
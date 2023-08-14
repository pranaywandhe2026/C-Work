#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1) {
                a=i;
                cout<<a;
            }
            else {
                a--;
                cout<<a;
            }
        }
        
        cout<<endl;
    }            
}
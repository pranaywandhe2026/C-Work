#include<iostream.h>
using namespace std;
int main(){
    int r;
    cout<<"enter the radius=";
    cin>>r;
    float area=3.14*r*r;
    float circumfernce=2*3.14*r;
    if(area>circumfernce) cout<<"area is greater";
    else cout<<"circumfernce is greater";
}
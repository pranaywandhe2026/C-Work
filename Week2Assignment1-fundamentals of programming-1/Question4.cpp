#include<iostream.h>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length=";
    cin>>l;
    cout<<"enter breadth=";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter) cout<<"area is greater than perimeter";
    else cout<<"perimeter is greater than area";
}
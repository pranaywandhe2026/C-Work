#include<iostream.h>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter side1=";
    cin>>side1;
    cout<<"enter side2=";
    cin>>side2;
    cout<<"enter side3=";
    cin>>side3;
    if(side1==side2 || side2==side3 || side1==side3) 
    cout<<"isosceles triangle";
    else if(side1==side2 && side2==side3 )
    cout<<"equilateral triangle";
}
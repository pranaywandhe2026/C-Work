#include<iostream.h>
using namespace std;
class circle
{
    public : int r;
    public : void input()
    {
        cout<<"enter the radius of a circle";
        cin>>r;
    }
    public : void output()
    {
        float area=2*3.14*r;
        cout<<"Area of a circle="<<area;
    }
};
int main()
{
    circle x;
    x.input();
    x.output();
    return 0;
}
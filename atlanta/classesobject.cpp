#include<iostream.h>
using namespace std;
class rectangle
{
    public :int h,w ,a;
    public: void input()
    {
        cout<<"enter the value of h and w";
        cin>>h>>w;
    }
    public : void output()
    {
        a=h*w;
        cout<<"AREA="<<a;
    }

};
int main()
{
    rectangle x;
    x.input();
    x.output();
    return 0;
}

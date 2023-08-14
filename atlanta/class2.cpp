#include<iostream>
using namespace std;
class square
{
    public : int s;
    public : void input()
    {
        cout<<"enter the side of square";
        cin>>s;
    }
    public : void output()
    {
        int area=s*s;
        cout<<"Area of square="<<area;
    }
};
int main()
{
    square x;
    x.input();
    x.output();
    return 0;
}
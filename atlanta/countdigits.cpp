#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int count=0;
    for(count=0;n>0;count++)
    {
        n=n/10;
    }
    cout<<"count="<<count;
    return 0;
}
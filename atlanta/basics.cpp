#include<iostream.h>
using namespace std;
int factorial(int n)
{
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int x=factorial(n);
    cout<<"factorial="<<x;
    return 0; 
}


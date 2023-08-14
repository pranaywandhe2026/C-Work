#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int product=1;
    for(int i=1;n>0;i++)
    {
        product=product*(n%10);
        n=n/10;
    }
    cout<<"product of a given number="<<product;
    return 0;
}
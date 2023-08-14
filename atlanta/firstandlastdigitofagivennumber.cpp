#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int f,l;
   
    for(int i=1;n>0;i++)
    {   
        f=n%10;
        n=n/10;
        
    }
    cout<<"first digit="<<f<<endl;
    cout<<"last digit="<<(n%10);
    
    return 0;
}
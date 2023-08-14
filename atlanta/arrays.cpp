#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T>0)
    {
        char s[5],t[5];
        cout<<"enter strings";
        cin>>s>>t;
        for(int i=0;i<5;i++)
        {   
           
            if(s[i]!=t[i]) cout<<'b';
            else cout<<'g';
        }
        T--;
    }
	return 0;
}

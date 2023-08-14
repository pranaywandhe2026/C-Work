#include <iostream.h>
using namespace std;

int main() {
   
        int x;
        cout<<"x=";
        cin>>x;
        int i;
        if(x%3==0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(i=1;i<=100;i++)
            {
             if( (x+i)%3==0 )
             {
                 cout<<(x+i)/3<<endl;
                 break;
             }
                    
               
            }
        }
        return 0;
        
    }
	 


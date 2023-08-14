#include<iostream.h>
using namespace std;
int main(){
   char ch;
   cout<<"enter the character=";
   cin>>ch;
   int a=(int)ch;
   if(a>=48 && a<=57) cout<<"digit";
   else if((a>=65 && a<=90) || (a>=97 && a<=122)) cout<<"alphabet";
   else cout<<"special character";
}
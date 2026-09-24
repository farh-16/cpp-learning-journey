#include<iostream>
using namespace std;
int main()
{

   float x;
   cout<<"Enter a number : ";
   cin>>x;
   char op;
   cout<<"Enter operator : ";
    cin>>op;
   float y;
   cout<<"Enter second number : ";
   cin>>y;

   if(op=='+')
   cout<<x+y<<endl;
   else if(op=='-')
   cout<<x-y<<endl;
   else if(op=='*')
   cout<<x*y<<endl;
   else if(op=='/')
    cout<<x/y<<endl;
    else if(op=='%')
    cout<<(x/y)*100<<endl;

    else
    cout<<"Invalid operator"<<endl;

}
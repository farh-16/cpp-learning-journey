#include<iostream>
using namespace std;
int main()
{

//Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch. The calculator should input two numbers and an operator from user.


   float x;
   cin>>x;
   char op;
    cin>>op;
   float y;
   cin>>y;

    switch(op)
    {
        case '+':
            cout<<x+y<<endl;
            break;

        case '-':
            cout<<x-y<<endl;
            break;

        case '*':
            cout<<x*y<<endl;
            break;

        case '/':
            cout<<x/y<<endl;
             break;

        case '%':
            cout<<(x/y)*100<<"%"<<endl;
            break;

        default:
            cout<<"Invalid operator"<<endl;
    }


}
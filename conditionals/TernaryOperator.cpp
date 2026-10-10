#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    //(condition) ? (if true) : (if false)

    (x%2==0) ? cout<<"Even number"<<endl : cout<<"Odd number"<<endl;

}
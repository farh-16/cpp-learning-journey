#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter first side of traingle:- ";
    cin>>x;

    int y;
    cout<<"Enter second side of triangle:- ";
    cin>>y;

    int z;
    cout<<"Enter third side of triangle:- ";
    cin>>z;

    if((x+y)>z && (y+z)>x and (z+x)>y)
    cout<<"It is a valid triangle"<<endl;
    else
    cout<<"It is not a valid triangle"<<endl;

}
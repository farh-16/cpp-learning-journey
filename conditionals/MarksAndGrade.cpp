#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter marks : ";
    cin>>x;

    if(x>=90 && x<=100)
    cout<<"Grade A"<<endl;
    else if(x>=80 )
    cout<<"Grade B"<<endl;
    else if(x>=65)
    cout<<"Grade C"<<endl;
    else if(x>=50)
    cout<<"Grade D"<<endl;
    else if(x>=35)
    cout<<"Grade E"<<endl;
    else if(x>=0)
    cout<<"Fail"<<endl;
    else
    cout<<"Invalid marks"<<endl;
}
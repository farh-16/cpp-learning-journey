#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter a number:- ";
    cin>>x;

    if (x%3==0 || x%5==0) //We can also use "or" instead of "||"    
    cout<<"It is divisible by 3 or 5"<<endl;
    
    else
        cout<<"It is not divisible by 3 or 5"<<endl;

}
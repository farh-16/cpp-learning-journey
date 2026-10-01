#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"give the number to check wheter it is a palindrome or not :- ";
    cin>>x;

    int original=x;
    int r=0;
    while(x>0)
    {
       int ld=x%10;
       r=r*10+ld;
       x/=10;

    }
    if(r==original)
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;

}
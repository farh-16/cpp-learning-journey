#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Give the number to check whether it is armstrong or not :- ";
    cin>>x;
     int orig=x;
     
     int sum=0;
     while(x>0)
     {
        int ld=x%10;
        x/=10;
        sum= sum + ld*ld*ld;
     }
     if(sum==orig)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
}
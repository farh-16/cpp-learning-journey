#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"give the number to find its greatest and smallest digit:- ";
    cin>>x;
    int great=0; 
    int small=9;
    while(x>0)
    {
        int ld= x%10;
        x/=10;
        if(ld>great)
        {
            great=ld;
        }
        if(ld<small){
            small=ld;
        }
    }
    cout<<"Greatest digit is:- "<<great<<endl;
    cout<<"Smallest digit is:- "<<small<<endl;
}
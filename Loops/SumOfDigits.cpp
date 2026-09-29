#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"give the number to count its digit:- ";
    cin>>x;
    
    int sum=1;
    while(x>0){
        int ld= x%10;
        x=x/10;  // x/=x
        //sum+=ld; //sum= sum + ld
        sum*=ld;
    }

    cout<<sum<<endl;
    
}
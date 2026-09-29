#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"give the number to count its digit:- ";
    cin>>x;
    
    int R=0;
    while(x>0){
        //int ld= x%10;
       // x=x/10;  // x/=x
        //R=R*10+ld; //sum= sum + ld
        
        int ld= x%10;
        R*=10;
        R+=ld;
        x/=10;
        
    }

    cout<<R<<endl;
    
}
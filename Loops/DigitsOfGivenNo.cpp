#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"give the number to count its digit:- ";
    cin>>x;
    
    int count=0;
    //while(x>0){
    while(x!=0){
        x=x/10;
        count++;

    }

    cout<<count<<endl;
    
}
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"starting Number :- ";
    cin>>x;
    int y;
    cout<<"Ending Number :- ";
    cin>>y;
    //100 times for 1 to 100
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }

    //     //50 times for 1 to 100
    //     for(int i=2; i<=100; i=i+2)
    //     {
    //         cout<<i<<endl;
    //     }
     
}
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"from ";
    cin>>x;
    int y;
    cout<<" to ";
    cin>>y;
    
    for(int i=x;i<=y;i++)
    {
        //if(i!=7 && i!=10)
       // if(i==7 || i==10) continue;
       if(i%2==0)continue;
        cout<<i<<endl;
    }
}
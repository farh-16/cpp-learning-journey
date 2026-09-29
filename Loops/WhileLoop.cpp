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
    
   int i=x;
   while(i<=y){
    cout<<i<<endl;
    i++;
   }
}
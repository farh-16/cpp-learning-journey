#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<" Enter a no. :- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i+1; j++){
           cout<<"*"<<"   " ;
       }
        cout<<endl;
    }
}
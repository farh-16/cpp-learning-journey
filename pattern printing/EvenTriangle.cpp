#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<" Enter a no. :- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
           cout<<2*j<<"   " ;
       }
        cout<<endl;
    }

    for(int i=1; i<=m; i++){
        int a=1;
        for(int j=1; j<=i; j++){
           cout<<j<<"   " ;
           a+=2;
       }
        cout<<endl;
    }
}
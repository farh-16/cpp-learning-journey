#include <iostream>
using namespace std;
int main()
{
    //rows=m
    //column=n
    int m;
    cout<<" Enter no. of rows:- ";
    cin>>m;
    int n;
    cout<<" Enter no. of Column:- ";
    cin>>n;

    for(int i=1; i<=m; i++){//rows
        for(int j=1; j<=n; i++)//column
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
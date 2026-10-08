#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a no. :- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int k=m; k>=1; k--){
        for(int l=1; l<=k; l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<" Enter a no. :- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            //cout<<(char) (j+96)<<"   " ;
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}
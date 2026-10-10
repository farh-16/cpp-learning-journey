#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a no.:- ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            if(i%2==1)
            cout<<j<<" ";
            else
                cout<<(char)(j+64)<< " ";
        }
            cout<<endl;
    }

    for(int i=m; i>=1; i--){
        for(int j=1; j<=i; j++){
            if(i%2==1)
            cout<<(char)(j+64)<<" ";
            else
                cout<<j<< " ";
        }
            cout<<endl;
    }

}
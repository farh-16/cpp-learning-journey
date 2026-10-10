#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Find H.C.F of:- ";
    cin>>n;
    for(int i=n/2; i>=1; i--){
    if(n%i==0){
        cout<<i<<endl;
        break; //to get out of the loop after first factor is found
        // break;    is used  to break loop
        
    }
    }
}
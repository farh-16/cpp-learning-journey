#include <iostream>
using namespace std;
int main(){

    int x;
    cout<<"find factorial upto :- ";
    cin>>x;
    long long fact =1;
    for(int i=1; i<=x; i++){
    fact *=i;
    
        //int ld= x%10;
        //x=x/10;  
        //fact= fact*ld;
    
    cout<<"factorial of" <<i<< " = " << fact << endl;}
}
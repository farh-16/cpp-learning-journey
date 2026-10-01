#include <iostream>
using namespace std;
int main(){

    int x;
    cout<<"give the number to find its factorial:- ";
    cin>>x;
    int fact=1;
    while(x>0){

        int ld= x%10;
        x=x/10;  
        fact= fact*ld;
    }
    cout<<"Factorial of the given number is:- "<<fact<<endl;
}
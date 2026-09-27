#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter a number:- ";
    cin>>n;


        //FOR COMPOSITE NUMBER

    // for(int i=2; i<=n/2; i++){
    // if(n%i==0){
    //     cout<<"Composite"<<endl;
    //     break; 
        
    //     }
    //     else
    //     cout<<"Not Composite"<<endl;
    //     break;
    // }




        //FOR PRIME NUMBER

    bool flag = false; //false means prime
    for(int i=2; i<=n/2; i++){
    if(n%i==0){
        flag =true; //true means composite
        break; 
        
        }
    }
    if(flag==false) cout<<"prime"<<endl;
    if(flag==true) cout<<"composite"<<endl;
    else cout<<"neither prime nor composite"<<endl;



}
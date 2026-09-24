#include<iostream>
using namespace std;;

int main()
{
    int x,y,z;
    cout<<"Enter first number:- ";
    cin>>x;

    cout<<"Enter second number:- ";
    cin>>y;

    cout<<"Enter third number:- ";
    cin>>z;


    // if (x>=y && x>=z)
    // cout<<x<<" is the greatest number"<<endl;

    // else if (y>=x && y>=z)
    // {
    //     cout<<y<<" is the greatest number"<<endl;

    // }

    // else 
    //     cout<<z<<" is the greatest number"<<endl;
    


    // NESTED IF ELSE STATEMENT
    if(x>y){ // y can never be greatest
        if(x>z)
            cout<<x<<" is the greatest number"<<endl;
        else // z>x>y
            cout<<z<<" is the greatest number"<<endl;
    

    }
    else{ //(y>x) x can never be greatest
        if(y>z)
            cout<<y<<" is the greatest number"<<endl;
        else // z>y>x
            cout<<z<<" is the greatest number"<<endl;
        


        
}
}
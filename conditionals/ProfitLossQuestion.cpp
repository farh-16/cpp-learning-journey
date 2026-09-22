#include<iostream>
using namespace std;
int main()
{

    // : If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred

float cp;
cout<<"Enter cost price : ";
cin>>cp;

float sp;
cout<<"Enter selling price : ";
cin>>sp;

if(sp>cp)
cout<<" seller has made profit of "<<(sp-cp)<<" rupees"<<endl;

else if(sp<cp)
cout<<" Seller has loss of "<<(cp-sp)<<" rupees"<<endl;

else
cout<<" No profit no loss "<<endl;

}
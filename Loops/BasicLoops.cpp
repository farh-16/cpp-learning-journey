#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    string w;
    cout<<"Enter a word : ";
    cin>>w;
    for(int i=10;i>=x;i--)
    {
        cout<<w<<endl;
    }
}
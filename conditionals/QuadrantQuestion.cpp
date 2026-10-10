#include<iostream>
using namespace std;
int main()
{
    //Given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0, 0).

    int x,y;
    cout<<"Enter x coordinate : ";
    cin>>x;
    cout<<"Enter y coordinate : ";
    cin>>y;

    if (x>0 && y>0)
    cout<<"Point lies in 1st Quadrant"<<endl;
    else if (x<0 && y>0)
    cout<<"Point lies in 2nd Quadrant"<<endl;
    else if (x<0 && y<0)
    cout<<"Point lies in 3rd Quadrant"<<endl;
    else if (x>0 && y<0)
    cout<<"Point lies in 4th Quadrant"<<endl;
    else if (x==0 && y!=0)
    cout<<"Point lies on y-axis"<<endl;
    else if (x!=0 && y==0)
    cout<<"Point lies on x-axis"<<endl;
    else
    cout<<"Point lies at the origin"<<endl;

}
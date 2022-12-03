// Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int  power_number(int x,int y);
int  power_number(int x,int y)
{
    int z=1;
    for(int i=0;i<y;i++)
    {
       z=z*x;
    }
      return z;
}
int main()
{
    int a,b,c;
    cout<<"Enter the Number you want to check power"<<endl;
    cin>>a;
    cout<<"Enter power"<<endl;
    cin>>b;
    c=power_number(a,b);
     cout<<"result of power is="<<c<<endl;
}


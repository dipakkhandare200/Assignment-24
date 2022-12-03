//Define a function to swap data of two int variables using call by reference
#include <iostream>
int swapnumber(int &a,int &b);
using namespace std;
int swapnumber(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swap number"<<"a="<<a<<"b="<<b;
}
int main()
{
    int t1,t2;
    cout<<"enter the two numbers"<< endl;
    cin>>t1>>t2;
    swapnumber(t1,t2);
    }

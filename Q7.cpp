// Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
int addnumber(int ,int ,int );
using namespace std;
int addnumber(int a,int b,int c=0)
{
   return a+b+c;
}
int main()
{
    int t1,t2,t3,sum;
    cout<<"enter the two or three numbers"<< endl;
    cin>>t1>>t2>>t3;
    sum=addnumber(t1,t2,t3);
    cout<<"sum of the number="<<sum;

    }

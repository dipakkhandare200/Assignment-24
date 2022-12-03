//Define a function to check whether a given number is a term in a Fibonacci series or not
#include<iostream>
int fabonacci(int n,int t1, int t2);
using namespace std;
int main()
{
    int w,m1,m2;
    cout<<"Enter nth value "<<endl;
    cin>>w;
    cout<<"Enter the 1st value of term="<<endl;
    cin>>m1>>m2;
    fabonacci(w,m1,m2);

}
int fabonacci(int n,int t1, int t2)
{
    int next;
    next=t1+t2;
    cout<<t1<<endl<<t2<<endl;
        for(int j=1;j<=n-2;j++)
        {
            cout<<next<<endl;
            t1=t2;
            t2=next;
            next=t1+t2;
        }
        cout<<endl;
    }


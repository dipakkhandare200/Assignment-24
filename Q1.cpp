//Define a function to check whether a given number is a Prime number or not
#include<iostream>
using namespace std;
void prime_number(int x);
void prime_number(int x)
{
    int c=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
           c++;
        }
    }
    if(c==2)
    {
        cout<<"This number is Prime"<<endl;
    }
    else
    {
      cout<<"This number not is Prime"<<endl;
   }
}
int main()
{
    int a;
    cout<<"Enter the Number want to check prime or not"<<endl;
    cin>>a;
    prime_number(a);

}

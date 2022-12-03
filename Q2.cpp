//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
void higher_number(int x,int y);
void higher_number(int x,int y)
{
        if(y>x)
        {
            cout<<"Higher number is"<<y<<endl;
        }
        else
            cout<<"Higher number is"<<x<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the Number which is higher"<<endl;
    cin>>a>>b;
    higher_number(a,b);

}

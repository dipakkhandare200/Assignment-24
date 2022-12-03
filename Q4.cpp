//Define a function to print Pascal Triangle up to N lines
#include<iostream>
int pascaltriangle(int rows);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Rows you want"<<endl;
    cin>>n;
    pascaltriangle(n);

}
int pascaltriangle(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<rows-i+1;j++)
        {
            cout<<" ";
        }
        int val=1;
        for(int j=1;j<=i;j++)
        {
            cout<<val<<" ";
            val=val*(i-j)/j;
        }
        cout<<endl;
    }
}

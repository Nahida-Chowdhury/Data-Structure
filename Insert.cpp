#include<iostream>
using namespace std;
int main()
{
    cout<<"Type array size:";
    int n;
    cin>>n;
    int ara[n],i,j,pos,val;

    cout<<"Enter the element: \n";
    for(i=0;i<n; i++)
    {
        cin >> ara[i];
    }
    n++;

    cout<<"Enter the value:";
    cin>>val;

    cout<<"Enter the position:";
    cin>>pos;

    for(j=n;j>=pos;j--)
    {
        ara[j] = ara[j-1];
    }
    ara[--pos]= val;

    cout<<"print after insertion:";
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

}

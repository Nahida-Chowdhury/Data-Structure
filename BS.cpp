#include<iostream>
using namespace std;
int BS (int ara[],int S)
{
    int i,low,high,mid,size,key;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==ara[mid])
            return mid;
        else if(key>ara[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return-1;
}
int main()
{
    int ara[10],pos,i,t;
    cout<< "Enter element: ";
    for(i=0; i<10; i++)
    {
        cin>>ara[i];
    }
    cout<< "Enter position: ";
    cin>>pos;
    t=BS(ara,pos);
    if(t==-1)
        cout<<"Not Found";
    else
        cout<<"Found";
}


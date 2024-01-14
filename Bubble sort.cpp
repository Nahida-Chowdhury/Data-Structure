#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int sz,temp;
    cin>>sz;

    for(int i=0; i<sz; i++)
    {
        cin>> a[i];
    }
    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<sz; i++)
    {
        cout << a[i] << " ";
    }
}

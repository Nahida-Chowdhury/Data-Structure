#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    int arr2[3][3]={{1,3,5},{4,6,8},{7,2,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Addition:";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]+arr2[i][j]<< " ";
        }
        cout<<endl;
    }
}


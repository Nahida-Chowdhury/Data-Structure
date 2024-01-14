#include<iostream>
using namespace std;
int LS(int arr[],int S)
{
    int i;
    for(i=0; i<10; i++)
    if(arr[i]==S)
    {
        return i;
    }
    return-1;
}
int main()
{
    int abc[10],f,i,t;
    cout<< "Enter element: ";
    for(i=0; i<10; i++)
    {
        cin>>abc[i];
    }
    cout<< "Enter position: ";
    cin>>f;
    t=LS(abc,f);
    if(t==-1)
        cout<<"Not found";
    else
        cout<<"Found";

}


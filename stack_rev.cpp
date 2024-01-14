#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string input;
    stack<char> s;

    cout << "Enter a string: ";
    cin >> input;

    for (int i=0; i<input.length(); i++)
    {
        s.push(input[i]);
    }
    while(!s.empty())
    {
        cout<< s.top();
        s.pop();
    }
    if(s.empty())
        cout<<"\nStack is empty";
    else

        cout<<"\nStack is full";
    return 0;
}

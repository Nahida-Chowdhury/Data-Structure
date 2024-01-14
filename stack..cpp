#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char>mystack;
    mystack.push ('A');
    mystack.push ('B');
    mystack.push ('C');
    mystack.push ('D');

    mystack.pop();
    mystack.pop();
    mystack.pop();

    while(!mystack.empty())
    {
        cout << ' ' << mystack.top();
        mystack.pop();
    }

}

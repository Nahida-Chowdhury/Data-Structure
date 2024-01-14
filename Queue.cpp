#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    string input;
    queue<char> s;

    cout << "Empty a string: ";
    cin >> input;

    for (int i=0; i<input.length(); i++)
    {
        s.push(input[i]);
    }
    while(!s.empty())
    {
        cout<< s.front();
        s.pop();
    }
    return 0;
}


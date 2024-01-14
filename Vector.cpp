#include<iostream>
#include<vector>
using namespace std;

class stack
{
private:
    vector<int>data;
public:
    void push (int value)
    {
        data.push_back(value);
    }
    void pop()
    {
        if(!data.empty())
        {
            data.pop_back();
        }
    }
    int top()
    {
        if(data.empty())
        {
            return -1;
        }
        else
        {
            return data.back();
        }
    }
    bool empty()
    {
        return data.empty();
    }
    int size()
    {
        return data.size();
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top : " <<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;

    s.pop();
    cout << "After pop : " <<s.top()<<endl;
    if(s.empty())
    {
        cout << "Empty" <<endl;
    }
    else
    {
        cout<< "Not empty"<< endl;
    }
    while(!s.empty())
    {
        s.pop();
    }
    cout << "Size : " <<s.size() << endl;
    return 0;
}

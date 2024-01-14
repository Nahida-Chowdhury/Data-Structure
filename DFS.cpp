#include<iostream>
#include<stack>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int n;

void dfs (int start)
{
    stack<int>s;
    s.push(start);
    visited[start]=true;

    while(!s.empty())
    {
        int cur = s.top();
        s.pop();
        cout<< cur<< " ";
        for(int i=0; i<n; i++)
        {
            if (adj[cur][i]==1 && !visited[i])
            {
                 visited[i]=true;
                s.push(i);
            }
        }
    }
}

int main ()
{
    int m;
    cout<< "Enter the number of vertices and edges of the  graph: ";
    cin>>n>> m;
    for(int i=0; i<m ; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=adj[v][u]=1;
    }

    int start;
    cin>>start;
    cout<< "DFS traversal starting from the vertex"<<start<< ":";
    dfs(start);
    cout<<endl;
    return 0;

}

#include <iostream>

using namespace std;

int n, m, k, graph[10][10], i, j, v, visited[10], s, visit[10], Stack[10], top;

int main()
{
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;

    for(k=1; k<=m; k++)
    {
        cin>>i>>j;
        graph[i][j] = 1;
    }

    cout<<"Inputed adjacency matrix: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Enter the source vertex: ";
    cin>>v;
    cout<<"DFS ORDER: "<<v<<" ";
    visited[v] = 1;
    s = 1;
    while(s<n)
    {
        for(j=n; j>=1; j--)
            if(graph[v][j] !=0 && visited[j] !=1 && visit[j] !=1)
        {
            visit[j] = 1;
            Stack[top] = j;
            top = top+1;
        }
        v = Stack[--top];
        cout<<v<<" ";
        s++;
        visit[v]=0;
        visited[v]=1;
    }
}

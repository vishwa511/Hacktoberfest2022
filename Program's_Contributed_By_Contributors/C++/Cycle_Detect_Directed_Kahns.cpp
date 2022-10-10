/*
Author :: DE-Nandan
*/
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
  //  adj[v].push_back(u);
}

bool cycleDirKahns(vector<int> adj[], int V)
{
    int indegreee[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
            indegreee[x]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegreee[i] == 0)
            q.push(i);
    }
    int count = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (auto x : adj[temp])
        {
            indegreee[x]--;
            if (indegreee[x] == 0)
                q.push(x);
        }
        count++;
    }

    // cout<<count<<en;
    if (count != V)
        return true;
    else
        return false;
}


int main()
{
    //Graph with Cycle
    vector<int> adj[5];
    addEdge(adj,1,0);
    addEdge(adj,0,2);
    addEdge(adj,2,1);
    addEdge(adj,0,3);
    addEdge(adj,3,4);

  
   
   
   cout<<cycleDirKahns(adj,5);


    
}

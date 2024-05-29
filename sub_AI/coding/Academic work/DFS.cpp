#include<bits/stdc++.h>
using namespace std;

vector<int>v[1000];
int visited[1000];

void dfs(int node)
{
    visited[node] = 1;

    cout << node << " --->";

    for(int i = 0; i < v[node].size();i++)
    {
        int child = v[node][i];

        if(visited[child] == 0)
        {
            dfs(child);
        }
    }
}
int main()
{
    int n , e;
    cin >> n >> e;

    while(e--)
    {
        int x , y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cout << "Enter your starting node : ";
    int s;
    cin >> s;
    cout << "path : " << endl;

    dfs(s);


    return 0;
}

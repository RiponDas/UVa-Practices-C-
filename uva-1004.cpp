#include<bits/stdc++.h>
#include<queue>
using namespace std;

int BFS(vector<int>g[100000])
{
    int u,v;
    int visited[100000]={0};
    queue<int>Q;
    Q.push(0);
    visited[0]=1;
    int distance[100000]={0};

    int c=0;
    while(!Q.empty()){
        u=Q.front();
        for(int i=0;i<g[u].size();i++){
            v=g[u][i];
            if(visited[v]==0){
                Q.push(v);
                visited[v]=1;
                if(distance[u]==0){
                    distance[v]=1;
                }
            }
            if(distance[v]==distance[u]){
                c++;

            }
        }
        Q.pop();
    }
    if(c==0)
        printf("BICOLORABLE.\n");
    else
        printf("NOT BICOLORABLE.\n");
}
int main()
{
    vector<int>G[100000];

    int node,edge,x,y;
    while(scanf("%d",&node),node!=0){
            scanf("%d",&edge);
    memset(G,0,sizeof(G));
    for(int i=0;i<edge;i++){
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);
    }
    //printf("Enter Source:");
    //scanf("%d",&s);
    BFS(G);
    }

    return 0;
}


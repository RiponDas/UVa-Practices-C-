#include<bits/stdc++.h>
using namespace std;
vector<int>G[21];
int source,dist;
void BFS(int source,int dist)
{
    int u,v;

    int visited[21]={0};
    queue<int>Q;
    Q.push(source);
    visited[source]=1;
    int distance[21]={0};

    while(!Q.empty()){
        u=Q.front();

        for(int i=0;i<G[u].size();i++){
            v=G[u][i];
            if(visited[v]==0){

                visited[v]=1;
                distance[v]=distance[u]+1;
                    Q.push(v);

                if(v==dist)
                    break;
            }
        }
        Q.pop();
        if(v==dist)
                    break;
    }
    printf("%2d to %2d: %d\n",source,dist,distance[dist]);
}

int main()
{
    //freopen("uva-567.txt","r", stdin);

    int node,edge,no_edge,n,test=1;
    while(scanf("%d",&no_edge)==1){
        for(int j=0;j<no_edge;j++){
            scanf("%d",&node);
            G[1].push_back(node);
            G[node].push_back(1);
        }

    for(int i=2;i<20;i++){
        cin>>no_edge;
        for(int j=0;j<no_edge;j++){
            scanf("%d",&node);
            G[i].push_back(node);
            G[node].push_back(i);
        }
    }
    scanf("%d",&n);
    printf("Test Set #%d\n",test);
    while(n--){
        scanf("%d %d",&source,&dist);
        BFS(source,dist);
    }
    printf("\n");
    //memset(G,0,sizeof(G));
    for(int k=0;k<21;k++)
        G[k].clear();
    test++;
    }
    return 0;
}

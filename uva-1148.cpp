#include<bits/stdc++.h>
using namespace std;

int BFS(vector<int>g[100001],int source, int dist)
{
    int u,v;

    int visited[100001]={0};
    queue<int>Q;
    Q.push(source);
    visited[source]=1;
    int distance[100001]={0};

    while(!Q.empty()){
        u=Q.front();

        for(int i=0;i<g[u].size();i++){
            v=g[u][i];
            if(visited[v]==0){

                visited[v]=1;
                distance[v]=distance[u]+1;
                    Q.push(v);

                if(v==dist){
                    break;
                }
            }
        }
        Q.pop();
    }
    return distance[dist]-1;
}

int main()
{
    //freopen("uva-1148.txt","r",stdin);
    vector<int>G[100001];
    int test,num,n,node,node_number,x,s,d,result;
    cin>>test;
    while(test--){
        cin>>num;
        for(int m=0;m<num;m++)
            G[m].clear();

        while(num--){
                 //memset(G,0,sizeof(G));
            scanf("%d %d",&node,&node_number);
            while(node_number--){
                    scanf("%d",&x);
                G[node].push_back(x);
                //G[x].push_back(node);
            }
        }
        scanf("%d %d",&s,&d);
        result = BFS(G,s,d);
        printf("%d %d %d\n",s,d,result);
        if(test!=0)printf("\n");

    }
    //printf("\n");
    return 0;
}

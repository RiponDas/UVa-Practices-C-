#include<bits/stdc++.h>
using namespace std;
 vector<long long>G[100000];
long long bfs(long long source,long long dis)
{
    long long visited_node;
    long long u,v;
    int visited[100005]= {0};
    queue<long long>Q;
    Q.push(source);
    visited[source]=1;
    visited_node=1;
    long long distance[100005]= {0};
    while(!Q.empty())
    {
        u = Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            v=G[u][i];
            if(visited[v]==0)
            {
                Q.push(v);
                visited[v]=1;
                distance[v] = distance[u]+1;
                if(distance[v]<=dis)
                    visited_node++;
            }
        }
        Q.pop();
    }
    return visited_node;
}

int main()
{
    long long s,edge,x,y,ttl,result;

    long long test=1;
    while(scanf("%lld",&edge),edge!=0)
    {
        long long total[100005]={0},c=0;
        for(int i=0; i<edge; i++)
        {
            scanf("%lld %lld",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);
            if(total[x]==0)
            {
                total[x]=1;
                c++;
            }
            if(total[y]==0)
            {
                total[y]=1;
                c++;
            }
        }

        while(scanf("%lld %lld",&s,&ttl))
        {
            if(s==0 && ttl==0){
                break;
            }
            result=bfs(s,ttl);
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",test,c - result,s,ttl);
            test++;
        }

        memset(G,0,sizeof(G));

    }
    return 0;
}


#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
vector<int> g[100005];
inline int ReadInt(int *x) {
    static char c, neg;
    while((c = getchar()) < '-')    {if(c == EOF) return EOF;}
    neg = (c == '-') ? -1 : 1;
    *x = (neg == 1) ? c-'0' : 0;
    while((c = getchar()) >= '0')
        *x = (*x << 3) + (*x << 1) + c-'0';
    *x *= neg;
    return 1;
}
int main() {
    freopen("uva-1148.txt","r",stdin);
    int testcase;
    int n, m, x, y;
    int i, j, k, st, ed;
    scanf("%d", &testcase);
    while(testcase--) {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            g[i].clear();
        for(i = 0; i < n; i++) {
            //scanf("%d %d", &x, &m);
            ReadInt(&x);
            ReadInt(&m);
            while(m--) {
                //scanf("%d", &y);
                ReadInt(&y);
                g[x].push_back(y);
            }
        }
        scanf("%d %d", &st, &ed);
        queue<int> Q;
        int dist[100005] = {};
        Q.push(st);
        dist[st] = 1;
        while(!Q.empty()) {
            x = Q.front(), Q.pop();
            for(i = 0; i < g[x].size(); i++) {
                if(dist[g[x][i]] == 0) {
                    dist[g[x][i]] = dist[x]+1;
                    Q.push(g[x][i]);
                }
            }
            if(dist[ed])    break;
        }
        printf("%d %d %d\n", st, ed, dist[ed]-2);
        if(testcase)
            puts("");
    }
    return 0;
}

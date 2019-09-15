#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,sum[6];
    int t;
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF){
            sum[1] = b2+b3+c1+c3+g1+g2;
            sum[2] = b2+b3+g1+g3+c1+c2;
            sum[3] = c2+c3+b1+b3+g1+g2;
            sum[4] = c2+c3+g1+g3+b1+b2;
            sum[5] = g2+g3+b1+b3+c1+c2;
            sum[6] = g2+g3+c1+c3+b1+b2;

            if((sum[1]<=sum[2]) && (sum[1]<=sum[3]) && (sum[1]<=sum[4]) && (sum[1]<=sum[5]) && (sum[1]<=sum[6])){
                printf("BCG %lld\n",sum[1]);
            }
            else if((sum[2]<=sum[1]) && (sum[2]<=sum[3]) && (sum[2]<=sum[4]) && (sum[2]<=sum[5]) && (sum[2]<=sum[6]))
                printf("BGC %lld\n",sum[2]);
            else if((sum[3]<=sum[2]) && (sum[3]<=sum[1]) && (sum[3]<=sum[4]) && (sum[3]<=sum[5]) && (sum[3]<=sum[6]))
                printf("CBG %lld\n",sum[3]);
            else if((sum[4]<=sum[2]) && (sum[4]<=sum[3]) && (sum[4]<=sum[1]) && (sum[4]<=sum[5]) && (sum[4]<=sum[6]))
                printf("CGB %lld\n",sum[4]);
            else if((sum[5]<=sum[2]) && (sum[5]<=sum[3]) && (sum[5]<=sum[4]) && (sum[5]<=sum[1]) && (sum[5]<=sum[6]))
                printf("GBC %lld\n",sum[5]);
            else if((sum[6]<=sum[2]) && (sum[6]<=sum[3]) && (sum[6]<=sum[4]) && (sum[6]<=sum[5]) && (sum[6]<=sum[1]))
                printf("GCB %lld\n",sum[6]);
    }
    return 0;
}

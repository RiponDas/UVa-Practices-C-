#include<bits/stdc++.h>
using namespace std;

long long int bigmod(long long a,long long b,long long M)
{
    if(b==0) return 1%M;
    long long x = bigmod(a,b/2,M);
    x = (x*x)%M;
    if(b%2 == 1)
        x = (x*a) %M;
    return x;
}
int main()
{
    long long int B,P,m;
    while(scanf("%lld %lld %lld",&B,&P,&m)!=EOF){
        printf("%d\n",bigmod(B,P,m));
    }
    return 0;
}

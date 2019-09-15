#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,result,n,m;
    while(scanf("%lld",&num)==1){
            n=(num+1)/2;
            m = (2*(n*n))-1;
            result = m+(m-2)+(m-4);
            printf("%lld\n",result);
    }
    return 0;
}

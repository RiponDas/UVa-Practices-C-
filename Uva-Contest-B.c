#include<stdio.h>
int main()
{
    int n,t,i,count=0,k,m=1,p=1,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
                for(k=n;k>1;k--){
                    m=m*k;
                }
                for(k=2;k<=n-2;k++){
                    p=p*k;
                }
            count=count+(m/p);
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}

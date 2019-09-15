#include<stdio.h>
int main()
{
    int a,b,t,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        if(a==b&&a%2!=0){
            printf("Case %d: %d\n",i,a);
        }
        else{
            for(j=a;j<=b;j++){
                if(j%2==0){
                    continue;
                }
                sum=sum+j;
            }
            printf("Case %d: %d\n",i,sum);
        }
        sum=0;
    }
    return 0;
}


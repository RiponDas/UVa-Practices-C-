#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    for(k=1;k<=n;k++){
            printf("\n");
    for(i=1;i<=m;i++){
            for(j=1;j<=i;j++)
        printf("%d",i);
    printf("\n");
    }
    for(i=m-1;i>=1;i--){
            for(j=1;j<=i;j++)
        printf("%d",i);
    printf("\n");
    }
    }
    return 0;
}

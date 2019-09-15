#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,amp,freq;
    scanf("%d",&t);
    while(t--){
           // printf("\n");

            scanf("%d\n%d",&amp,&freq);
            for(int i=1;i<=freq;i++){
                for(int j=1;j<=amp;j++){
                    for(int k=1;k<=j;k++)
                        printf("%d",j);
                    printf("\n");
                }
                for(int m=amp-1;m>0;m--){
                    for(int n=1;n<=m;n++)
                        printf("%d",m);
                    printf("\n");
                }
                if(i!=freq)
                printf("\n");
            }
        if(t)
            printf("\n");
    }
    return 0;
}

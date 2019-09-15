#include<stdio.h>
int main()
{
    int t,i,j,prob[13],count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            for(j=0;j<13;j++){
                scanf("%d",&prob[j]);
                if(prob[j]!=0){
                    count++;
                }
            }
            if(count==13){
                printf("Set #%d: Yes\n",i);
            }
            else{
                printf("Set #%d: No\n",i);
            }
    }
    return 0;
}

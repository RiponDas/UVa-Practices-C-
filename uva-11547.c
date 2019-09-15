#include<stdio.h>
int main()
{
    int t,i;
    long int n,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%ld",&n);
        m=(((((n*567)/9)+7492)*235)/47)-498;
        if(m<0){
            m=m*(-1);
        }
        printf("%ld\n",(m/10)%10);
    }
    return 0;
}

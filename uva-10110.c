#include<stdio.h>
#include<math.h>
int main()
{
long long num,i;
while(scanf("%lld",&num)==1)
{
if(num==0)
break;
i=sqrt(num);
if(i*i==num)
printf("yes\n");
else
printf("no\n");
}
}

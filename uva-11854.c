#include<stdio.h>
int main()
{
long int a,b,c,d,e,fun;
while(scanf("%ld%ld%ld",&a,&b,&c)==3)
{
d=a*a;
e=b*b;
fun=c*c;
if(a!=0 || b!=0 || c!=0)
 {
 if(fun==d+e)
 printf("right\n");
 else if(d==e+fun)
 printf("right\n");
 else if(e==d+fun)
 printf("right\n");
 else
 printf("wrong\n");
 }
}
return 0;
}

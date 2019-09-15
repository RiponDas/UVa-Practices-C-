#include<bits/stdc++.h>
using namespace std;
long long int arr[100]={0};
void fibbonacci(int x)
{
    arr[0]=1;
    arr[1]=2;
    for(int i=2;i<x;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
}
int main()
{
    int num;
    fibbonacci(100);
    while(scanf("%d",&num),num!=0){
        printf("%lld\n",arr[num-1]);
    }
    return 0;
}

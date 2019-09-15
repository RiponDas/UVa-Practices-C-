#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,t;
    int a[1000];
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
        for(int in=0;in<n;in++)
        scanf("%d",&a[in]);
            int c=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                key=a[j];
                if(a[j]>a[i]){
                    c++;
                    a[j]=a[i];
                    a[i]=key;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }

    return 0;
}

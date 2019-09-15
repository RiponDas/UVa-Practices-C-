#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,N;
    int a[10000];
    int ar[1000];
    cin>>t;
    while(t--){
        cin>>N;
        for(int i=0;i<N;i++)
            scanf("%d",&a[i]);

        int c1=0,c2=0,c=-1,j=0,c3=0;
        for(int i=1;i<N;i++){
            if(a[i]>=a[i-1])
                c1++;
            if(a[i-1]>=a[i])
                c2++;
            if(i<N-1){
                if((a[i]>a[i-1]) && (a[i]>a[i+1])){
                        ar[j]=c;
                        j++;
                        c=0;
                }
            }
            if(c>-1)
                c++;
            if(a[i]==a[i-1])
                c3++;
        }
        sort(ar,ar+j);
        if(c3==(N-1)){
            printf("neutral\n");
            continue;
        }
        else if(c1==(N-1)){
            printf("allGoodDays\n");
            continue;
        }

        else if(c2==(N-1)){
            printf("allBadDays\n");
            continue;
        }

        else if(ar[j-1]<2){
            printf("none\n");
            continue;
        }
        else
        {
            printf("%d\n",ar[j-1]-1);
            continue;
        }
    }
    return 0;
}

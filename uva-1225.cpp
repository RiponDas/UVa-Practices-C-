#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j;
    scanf("%d",&t);
    while(t--){

        int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
        scanf("%d",&n);
        for(int k=1;k<=n;k++){
            j=k;
            while(j!=0){
                if((j%10)==0)
                c0++;
                else if((j%10)==1)
                c1++;
                else if((j%10)==2)
                c2++;
                else if((j%10)==3)
                c3++;
                else if((j%10)==4)
                c4++;
                else if((j%10)==5)
                c5++;
                else if((j%10)==6)
                c6++;
                else if((j%10)==7)
                c7++;
                else if((j%10)==8)
                c8++;
                else if((j%10)==9)
                c9++;
                j=j/10;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    }
    return 0;
}

#include<bits/stdc++.h>
int main()
{
    int x0,y0,x1,y1,cx,cy,r,l,w,t;
    double per,c1,c2,lw,lr;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d %d",&x0,&y0,&x1,&y1,&cx,&cy,&r);
        l=(x1-x0);
        w=(y1-y0);
        c1=(cx-x0);
        c2=(cy-y0);
        per= l*0.45;
        lw = l/w;
        lr = l/r;
        if((lw==(10/6)) && (lr==5) && (c1==per) && (c2==(w/2)))
            prinntf("YES\n");
        else
            printf("NO\n");
        /*
        if((y/x)==(6/10)){
            if((x/r)==5){
                if(c2==(y/2)){
                    if((double)c1==(((double)x*9)/20)){
                        printf("YES\n");
                    }
                    else printf("NO\n");
                }
                else printf("NO\n");
            }
            else printf("NO\n");
        }
        else{
            printf("NO\n");
        }*/
    }
    return 0;
}

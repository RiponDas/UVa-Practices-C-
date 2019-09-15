#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r;
    char c1,c2;
    cin>>n>>m;
    //int a[105];
    string a;
    cin>>a;
    for(int K=0;K<m;K++){
        cin>>l>>r>>c1>>c2;
        for(int j=l-1;j<r;j++){
            if(a[j]==c1){
                a[j]=c2;
            }
        }
    }
    for(int p=0;p<n;p++){
        printf("%c",a[p]);
    }
    printf("\n");
    return 0;
}

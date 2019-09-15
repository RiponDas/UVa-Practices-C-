#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    string p;
    int n,m;
    cin>>test;
    while(test--){
        cin>>n;
        getchar();
        getline(cin,p);
        m=0;
        for(int i=0;i<p.size();i++){
            m=((m*10)+(p[i]-48))%n;
        }
        printf("%d\n",m);
    }
    return 0;
}

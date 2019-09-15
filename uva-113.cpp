#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p,pc;
    while(scanf("%lf %lf",&n, &p)!=EOF){
        pc = pow(p,(1/n));
        printf("%0.0lf\n",pc);
    }
    return 0;
}

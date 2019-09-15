#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,ar[10];
    scanf("%d",&t);
    while(t--){
    string s;
    cin>>s;
        if((n==1)||(n==4)||(n==78)){
            printf("%c\n",'+');
        }

            if(s=="1" || s=="4" || s=="78") cout<<"+"<<endl;
        else if(s[s.length()-1]=='5' && s[s.length()-2]=='3') cout<<"-"<<endl;
        else if(s[s.length()-1]=='4' && s[0]=='9') cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0') cout<<"?"<<endl;
    }
    return 0;
}

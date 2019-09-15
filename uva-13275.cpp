#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
    if(year %  400  ==  0)  return  true;
    else  if(year  %  100  ==  0)  return  false;
    else  if(year  %  4  ==  0)  return  true;
    else return false;
}
int main()
{
    int t,D,M,Y,QY;
    cin>>t;
    for(int test = 1; test<=t; test++){
        cin>>D>>M>>Y>>QY;

        if((D==29) && (M==2)){
                int c=0;
            for(int BY=Y+1;BY<=QY;BY++){
                if(isLeapYear(BY))
                    c++;
            }
        printf("Case %d: %d\n",test,c);
        }
        else{
            printf("Case %d: %d\n",test,QY-Y);
        }
    }
    return 0;
}

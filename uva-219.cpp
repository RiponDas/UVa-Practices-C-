#include<stdio.h>
int main()
{
    int t;
    int day1,day2,day,month1,month2,month,year1,year2,year;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d/%d/%d",&day1,&month1,&year1);
        scanf("%d/%d/%d",&day2,&month2,&year2);

        if(day2>day1){
            day1=day1+30;
            month2++;
        }
        day=day1-day2;

        if(month2>month1){
            month1=month1+12;
            year2++;
        }
        month=month1-month2;
        year=year1-year2;

        if(year<0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(year>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,year);

    }
    return 0;
}

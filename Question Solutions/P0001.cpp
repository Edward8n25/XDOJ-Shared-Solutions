//P0001：输入两个整数，计算某一年这一天的日期是几月几号。
#include<stdio.h>
int main()
{
    long int year, day, x, y, z, m, t;
    scanf("%ld %ld", &year, &day);//输入两个数，year表示年份，day表示是这一年的第几天
    x=year%4;
    y=year%100;
    z=year%400;//用于判断这一年是不是闰年
    if(x==0&&y!=0)
    {
        if(day<=31)
        {
            printf("1 %ld",day);
        }
        else if(day>31&&day<=60)
        {
            t=day-31;
            printf("2 %ld",t);
        }
        else if(day>60&&day<=91)
        {
            t=day-60;
            printf("3 %ld",t);
        }
        else if(day>91&&day<=121)
        {
            t=day-91;
            printf("4 %ld",t);
        }
        else if(day>121&&day<=152)
        {
            t=day-121;
            printf("5 %ld",t);
        }
        else if(day>152&&day<=182)
        {
            t=day-152;
            printf("6 %ld",t);
        }
        else if(day>182&&day<=213)
        {
            t=day-182;
            printf("7 %ld",t);
        }
        else if(day>213&&day<=244)
        {
            t=day-213;
            printf("8 %ld",t);
        }
        else if(day>244&&day<=274)
        {
            t=day-244;
            printf("9 %ld",t);
        }
        else if(day>274&&day<=305)
        {
            t=day-274;
            printf("10 %ld",t);
        }
        else if(day>305&&day<=335)
        {
            t=day-305;
            printf("11 %ld",t);
        }
        else if(day>335)
        {
            t=day-335;
            printf("12 %ld",t);
        }
    }
    else if(z==0)
    {
        if(day<=31)
        {
            printf("1 %ld",day);
        }
        else if(day>31&&day<=60)
        {
            t=day-31;
            printf("2 %ld",t);
        }
        else if(day>60&&day<=91)
        {
            t=day-60;
            printf("3 %ld",t);
        }
        else if(day>91&&day<=121)
        {
            t=day-91;
            printf("4 %ld",t);
        }
        else if(day>121&&day<=152)
        {
            t=day-121;
            printf("5 %ld",t);
        }
        else if(day>152&&day<=182)
        {
            t=day-152;
            printf("6 %ld",t);
        }
        else if(day>182&&day<=213)
        {
            t=day-182;
            printf("7 %ld",t);
        }
        else if(day>213&&day<=244)
        {
            t=day-213;
            printf("8 %ld",t);
        }
        else if(day>244&&day<=274)
        {
            t=day-244;
            printf("9 %ld",t);
        }
        else if(day>274&&day<=305)
        {
            t=day-274;
            printf("10 %ld",t);
        }
        else if(day>305&&day<=335)
        {
            t=day-305;
            printf("11 %ld",t);
        }
        else if(day>335)
        {
            t=day-335;
            printf("12 %ld",t);
        }
    }
    else
    {
        if(day<=31)
        {
            printf("1 %ld",day);
        }
        else if(day>31&&day<=59)
        {
            t=day-31;
            printf("2 %ld",t);
        }
        else if(day>59&&day<=90)
        {
            t=day-59;
            printf("3 %ld",t);
        }
        else if(day>90&&day<=120)
        {
            t=day-90;
            printf("4 %ld",t);
        }
        else if(day>120&&day<=151)
        {
            t=day-120;
            printf("5 %ld",t);
        }
        else if(day>151&&day<=181)
        {
            t=day-151;
            printf("6 %ld",t);
        }
        else if(day>181&&day<=212)
        {
            t=day-181;
            printf("7 %ld",t);
        }
        else if(day>212&&day<=243)
        {
            t=day-212;
            printf("8 %ld",t);
        }
        else if(day>243&&day<=273)
        {
            t=day-243;
            printf("9 %ld",t);
        }
        else if(day>273&&day<=304)
        {
            t=day-273;
            printf("10 %ld",t);
        }
        else if(day>304&&day<=334)
        {
            t=day-304;
            printf("11 %ld",t);
        }
        else if(day>334)
        {
            t=day-334;
            printf("12 %ld",t);
        }
    }
    return 0;
}

//P0005：判断正整数a能否被b整数，如果不能整除，输出商和余数。
/*输入说明:输入两个正整数a和b（0<a, b<=10000），a和b之间用空格分隔。
输出说明:如果a能被b整除，输出yes，否则在同一行输出a除以b的商和余数，商和余数之间用空格分隔*/
#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    if (a%b == 0)
    {
        printf("yes");
    }
    else
    {
        c = a%b;
        d = (a-c)/b;
        printf("%d %d", d, c);
    }
    return 0;
}

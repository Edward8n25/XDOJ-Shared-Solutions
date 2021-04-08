//P0004：小型符号计算器。
#include<stdio.h>
int main()
{
    int x, y, z;
    char m;
    scanf("%d %d %c", &x, &y, &m);
    if(m == '+')
    {
        z = x+y;
        printf("%d", z);
    }
    else if(m == '-')
    {
        z = x-y;
        printf("%d", z);
    }
    else if(m == '*')
    {
        z = x*y;
        printf("%d", z);
    }
    else if(m == '/' && y != 0)
    {
        z = x/y;
        printf("%d", z);
    }
    else if(m == '/' && y == 0)
    {
        printf("Divided by zero!");
    }
    else if(m != '+' && m != '-' && m != '*' && m == '/')
    {
        printf("Invalid operator!");
    }
    return 0;
}

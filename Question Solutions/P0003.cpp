//P0003：对数组进行冒泡排序并计算总排序次数。
#include<stdio.h>
int main()
{
    int i = 0, j = 0;//初始化参数
    int sum = 0, a[10001], n, t;//t用来存储要交换的那一个数
    scanf("%d", &n);//输入交换的数字的总数
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//存储数字于数组里面
    }
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
                sum++;//交换一次记录一次
            }
        }
    }
    printf("%d", sum);
    return 0;
}

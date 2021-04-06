//P0002：斐波那契数列求和。
#include<stdio.h>
int fiba(int n);
int fibb(int n);
int main()
{
	int n;
	double sum = 0.0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
    	sum += fiba(i)*1.0/fibb(i);
	printf("%.2f", sum);
	return 0;
}
int fiba(int n)
{
	if(n == 1)
	    return 2;
	if(n == 2)
	    return 3;
	    return fiba(n-1)+fiba(n-2);
}
int fibb(int n)
{
	if(n == 1)
	    return 1;
	if(n == 2)
	    return 2;
	    return fibb(n-1)+fibb(n-2);
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row,i, j;
	char L ;
	printf("Input row : ");
	scanf("%d", &row);
	for (i=1;i<=row;i++)
	{
		L = 'A';
		for (j = row - i; j >= 1;j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%c",L);
			L++;
		}
		L--;
		for (j = 1; j <= i-1; j++)
		{
			L--;
			printf("%c", L);
		}
		printf("\n");
	}

	printf("\n");
}

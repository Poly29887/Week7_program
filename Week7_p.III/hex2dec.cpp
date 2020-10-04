#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int hex2dec(char);
int main()
{
	int  i,p,ch,num,j=0,keep = 1,dec=0;
	char hex[1000];
	printf("Input Decimal Number : ");
	scanf("%s",hex);
	ch = strlen(hex);
	j = ch - 1;
	for(i=0;i<ch;i++)
	{
		keep = 1;
		for (p = 1; p <= (ch-1)-i; p++)
		{
			keep *= 16;
		}
		num = hex2dec(hex[i]);
		keep *= num;
		dec += keep;
	}
	printf("Decimal Number : %d", dec);
}
int hex2dec(char l)
{
	int n = 0 ;
	if (l >= 48 && l <= 57)
	{
		n = l - 48;
		return n;
	}
	else if (l >= 65 && l <= 70)
	{
		n = 10 + (l - 65);
		return n;
	}
	
}
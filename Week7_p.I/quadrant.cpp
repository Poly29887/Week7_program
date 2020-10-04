#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y;
	printf("Input(x,y): ");
	scanf("%d %d", &x, &y);
	if (x > 0)
	{
		if (y > 0) printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
		if (y < 0) printf("The coordinate point (%d,%d) lies in the Fourth quadrant.", x, y);
	}
	if (x < 0)
	{
		if (y > 0) printf("The coordinate point (%d,%d) lies in the Second quadrant.", x, y);
		if (y < 0) printf("The coordinate point (%d,%d) lies in the Third quadrant.", x, y);
	}

	printf("\n");
}
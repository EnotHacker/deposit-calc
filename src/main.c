#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "depcalc.h"

int main()
{
	int m, d;
	printf("Ваш вклад:");
	if(scanf("%d",&m)!=1)
	{
		printf("введены неверные данные!\n");
		exit(0);
	}
	depositAmount( m);
	printf("Кол-во дней:");
	if(scanf("%d",&d)!=1)
	{
		printf("введены неверные данные!\n");
		exit(0);
	}
	depositDays( d);
	profAmount( d, m);
	return 0;
}

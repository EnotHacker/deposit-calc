#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "depcalc.h"


int depositAmount(int m)
{	
	if (m < 10000)
	{
		printf("Вклад должен быть равен или больше 10000\n");
		exit(0);
	}
	return 0;
}

int depositDays(int d)
{	
	if (d <= 0 && d > 365 )
	{
		printf("Кол-во дней должно быть от 1 до 365\n");
		exit(0);
	}
	return 0;
}

int profAmount(int d, int m)
{	
	double k = m;
	if (m > 100000)
	{	
		if ((d >= 241) && (d <=365))
		{
			printf("%f\n", (k+(k*15/100)));

		}
		if ((d >= 121) && (d <=240))
		{
			printf("%f\n", (k+(k*8/100)));

		}
		if ((d >= 31) && (d <=120))
		{
			printf("%f\n", (k+(k*3/100)));

		}
		if ((d >= 1) && (d <=30))
		{
			printf("%.0f\n", (k-(k*10/100)));
	
		}
	}
	else
	{
		if ((d >= 241) && (d <=365))
		{
			printf("%f\n", (k+(k*12/100)));

		}
		if ((d >= 121) && (d <=240))
		{
			printf("%f\n", (k+(k*6/100)));

		}
		if ((d >= 31) && (d <=120))
		{
			printf("%f\n", (k+(k*2/100)));

		}
		if ((d >= 1) && (d <=30))
		{
			printf("%.0f\n", (k-(k*10/100)));

		}
	}
	return 0;
}	

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "depcalc.h"


int depositAmount(int m)
{	
	if(m >= 10000){
		return 1;
	} else {
		return 0;
		exit(0);
	}
}

int depositDays(int d)
{	
	if (d <= 365 && d > 0){
		return 1;
	} else {
		return 0;
		exit(0);
	}
}

int profAmount(int d, int m)
{	
	double k = m;
	if (m > 100000)
	{	
		if ((d >= 241) && (d <=365))
		{
			k=k+(k*15/100);

		}
		if ((d >= 121) && (d <=240))
		{
			k=k+(k*8/100);

		}
		if ((d >= 31) && (d <=120))
		{
			k=k+(k*3/100);

		}
		if ((d >= 1) && (d <=30))
		{
			k=k-(k*10/100);
	
		}
	}
	else
	{
		if ((d >= 241) && (d <=365))
		{
			k=k+(k*12/100);

		}
		if ((d >= 121) && (d <=240))
		{
			k=k+(k*6/100);

		}
		if ((d >= 31) && (d <=120))
		{
			k=k+(k*2/100);

		}
		if ((d >= 1) && (d <=30))
		{
			k=k-(k*10/100);

		}
	}
	return k;
}	

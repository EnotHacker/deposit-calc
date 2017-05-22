#include <stdio.h>
#include "depcalc.h"
#include "ctest.h"

#define YES 1
#define NO 0

CTEST(ValidationCheck, DayLessNull){
	const int d = -1;
	ASSERT_EQUAL( NO, depositDays(d));
}

CTEST(ValidationCheck, Day300){
	const int d = 300;
	ASSERT_EQUAL( YES, depositDays(d));
}

CTEST(ValidationCheck, Day1){
	const int d = 1;
	ASSERT_EQUAL( YES, depositDays(d));
}

CTEST(ValidationCheck, Day365){
	const int d = 365;
	ASSERT_EQUAL( YES, depositDays(d));
}

CTEST(ValidationCheck, Day366){
	const int d = 366;
	ASSERT_EQUAL( NO, depositDays(d));
}

CTEST(ValidationCheck, DayNull){
	const int d = 0;
	ASSERT_EQUAL( NO, depositDays(d));
}

CTEST(ValidationCheck, Money10000){
	const int m = 10000;
	ASSERT_EQUAL( YES, depositAmount(m));
}

CTEST(ValidationCheck, Money100000){
	const int m = 100000;
	ASSERT_EQUAL( YES, depositAmount(m));
}

CTEST(ValidationCheck, MoneyLessNull){
	const int m = -1;
	ASSERT_EQUAL( NO, depositAmount(m));
}

CTEST(ValidationCheck, Money9999){
	const int m = 9999;
	ASSERT_EQUAL( NO, depositAmount(m));
}

CTEST(ValidationCheck, MoneyNull){
	const int m = 0;
	ASSERT_EQUAL( NO, depositAmount(m));
}


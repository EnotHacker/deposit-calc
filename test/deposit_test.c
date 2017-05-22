#include <stdio.h>
#include "depcalc.h"
#include "ctest.h"

CTEST(DepositCheck,Day10Money50000){
	const int d = 10;
	const int m = 50000;
	int expected = 45000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck,Day35Money50000){
	const int d = 35;
	const int m = 50000;
	int expected = 51000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, Day130Money50000){
	const int d = 130;
	const int m = 50000;
	int expected = 53000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck,Day250Money50000){
	const int d = 250;
	const int m = 50000;
	int expected = 56000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, Day10Money1000000){
	const int d = 10;
	const int m = 1000000;
	int expected = 900000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, Day35Money1000000){
	const int d = 35;
	const int m = 1000000;
	int expected = 1030000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, Day130Money1000000){
	const int d = 130;
	const int m = 1000000;
	int expected = 1080000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, Day250Money1000000){
	const int d = 250;
	const int m = 1000000;
	int expected = 1150000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

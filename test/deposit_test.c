#include <stdio.h>
#include "../src/depcalc.h"
#include "../thirdparty/ctest.h"

CTEST(DepositCheck, DepositTest_1){
	const double d = 10;
	const double m = 50000;
	double expected = 45000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_2){
	const int d = 35;
	const int m = 50000;
	int expected = 51000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_3){
	const int d = 130;
	const int m = 50000;
	int expected = 53000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_4){
	const int d = 250;
	const int m = 50000;
	int expected = 56000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_5){
	const int d = 10;
	const int m = 1000000;
	int expected = 900000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_6){
	const int d = 35;
	const int m = 1000000;
	int expected = 1030000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_7){
	const int d = 130;
	const int m = 1000000;
	int expected = 1080000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

CTEST(DepositCheck, DepositTest_8){
	const int d = 250;
	const int m = 1000000;
	int expected = 1150000;
	ASSERT_EQUAL( expected, profAmount(d, m));
}

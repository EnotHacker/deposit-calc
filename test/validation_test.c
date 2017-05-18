#include <stdio.h>
#include "../src/depcalc.h"
#include "../thirdparty/ctest.h"

#define YES 1
#define NO 0


CTEST(ValidationCheck, ValidationTest_1){
	printf("Проверна кол-ва дней");
	const int d = 300;
	ASSERT_EQUAL(depositDays(d), YES);
}

CTEST(ValidationCheck, ValidationTest_2){
	printf("Проверна кол-ва дней");
	const int d = 1;
	ASSERT_EQUAL(depositDays(d), YES);
}

CTEST(ValidationCheck, ValidationTest_3){
	printf("Проверна кол-ва дней");
	const int d = 365;
	ASSERT_EQUAL(depositDays(d), YES);
}

CTEST(ValidationCheck, ValidationTest_4){
	printf("Проверна кол-ва дней");
	const int d = 366;
	ASSERT_EQUAL(depositDays(d), NO);
}

CTEST(ValidationCheck, ValidationTest_5){
	printf("Проверна кол-ва дней");
	const int d = 0;
	ASSERT_EQUAL(depositDays(d), NO);
}

CTEST(ValidationCheck, ValidationTest_6){
	printf("Проверна кол-ва денег");
	const int m = 10000;
	ASSERT_EQUAL(depositAmount(m), YES);
}

CTEST(ValidationCheck, ValidationTest_7){
	printf("Проверна кол-ва денег");
	const int m = 100000;
	ASSERT_EQUAL(depositAmount(m), YES);
}

CTEST(ValidationCheck, ValidationTest_8){
	printf("Проверна кол-ва денег");
	const int m = 1000000;
	ASSERT_EQUAL(depositAmount(m), YES);
}

CTEST(ValidationCheck, ValidationTest_9){
	printf("Проверна кол-ва денег");
	const int m = 9999;
	ASSERT_EQUAL(depositAmount(m), NO);
}

CTEST(ValidationCheck, ValidationTest_10){
	printf("Проверна кол-ва денег");
	const int m = 0;
	ASSERT_EQUAL(depositAmount(m), NO);
}

CTEST(ValidationCheck, ValidationTest_11){
	printf("Проверна кол-ва денег");
	const int m = -1;
	ASSERT_EQUAL(depositAmount(m), NO);
}

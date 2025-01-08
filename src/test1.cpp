#include <stdio.h>
#include "testsub/sub1.h"

int test1(){
	printf("../../src/test1.cpp\n");
	sub1();
	printf("[END] ../../src/test1.cpp\n");
	return 0;
}
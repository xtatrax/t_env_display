#include <stdio.h>
#include "wintest1.h"
#include "../../src/test1.h"

int main(int argc, char **argv) {
	printf("Hello, World!\n");
	printf("win main\n");
	wintest1();
	test1();
	printf("[END] win main\n");
	getchar();
	return 0;
}
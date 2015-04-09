#include "function.h"
#include <stdio.h>
#include <assert.h>

void main()
{
	test_input_base_to_base10();
}
	
void test_input_base_to_base10()
{
	assert(input_base_to_base10("1010", 2) == 10);
	assert(input_base_to_base10("4A", 16) == 74);
	printf("Test Passed\n");
}
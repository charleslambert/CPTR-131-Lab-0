#include "functions.h"
#include <stdio.h>
#include <assert.h>
#include "test.h"

int main()
{
	
	test_input_base_to_base10();
	test_convert_char_to_base10();
	
	
	
	return 0;
}

void test_convert_char_to_base10()
{
	int i;
	
	printf("test convert_char_to_base10\n");
	
	i=0;
	convert_char_to_base10('2',&i,2);
	assert(i == 0);
	
	i=0;
	convert_char_to_base10('A',&i,16);
	assert(i == 10);
	
	printf("Test Passed\n");
}
	
void test_input_base_to_base10()
{
	printf("test input_base_to_base10\n");
	
	assert(input_base_to_base10("1010", 2) == 10);
	assert(input_base_to_base10("4A", 16) == 74);
	
	printf("Test Passed\n");
}
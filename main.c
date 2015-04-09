#include "functions.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char input[65];
	int input_base;
	int output_base;
	int converted_base;
	
	printf("Number to be converted: ");
	scanf("%s", input);
	
	printf("The base it is in: ");
	scanf("%d", &input_base);
	
	printf("Base you would like to convert to: ");
	scanf("%d", &output_base);
	
	converted_base = input_base_to_base10(input,input_base);
	convert_to_outputbase(converted_base,output_base); 
}



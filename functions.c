#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

int input_base_to_base10(char input[], int input_base) 
{
	int input_L = strlen(input);
	int converted_base=0;
	int i;
	
	for (i=0; i<input_L; i++) 
	{
		converted_base *= input_base;
		
		if(convert_char_to_base10(input[i],&converted_base, input_base))
		{
			printf("Is not a valid digit\n");
			return -1;
		}
	}
	return converted_base;
}

int convert_char_to_base10(char num, int *converted_num, int input_base)
{
	int digit;
	
	if (isalpha(num)){
		digit = num - 'A' +10; //This conversion is for Letter representations
	}
	else
	{
		digit = num - '0';
	}
	if (digit >= input_base){
		return -1;
	}
	*converted_num += digit;
	return 0;
}

int convert_to_outputbase(int num, int outputbase,char output[])
{
	int count = count_loop(num, outputbase);
	int i;
	int mod_inputbase;
	
	output[count]='\0';
	count = count -1;
	
	while(num != 0){
		mod_inputbase =(num % outputbase);
		if (mod_inputbase > 9){
			output[count]='A' + mod_inputbase - 10;
		} else{
			output[count]='0'+mod_inputbase;
		}
		num = num/outputbase;
		count--;
	}
	return 0;
}

int count_loop(int num,int outputbase)
{
	int count=0;
	
	while(num!=0)
	{
		num = num/outputbase;
		count++;
	}
	return count;
}
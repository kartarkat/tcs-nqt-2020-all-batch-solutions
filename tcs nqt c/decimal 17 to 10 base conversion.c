/*
SLOT: 3
Write a program to convert a decimal number in the base 17 to a decimal number in base 10 :
Problem statement
apply decimal conversion logic to solve this problem, where 0 - 9 digits are same, while replace A B C D E F G with 10 11 12 13 14 15 16 respectively in the given input and do the conversion accordingly
Example-1
Input: 1A
Expected Output: 27
Example-2
Input: 23GF
Expected Output: 10980
PROGRAM IN C :
*/


#include <stdio.h>


int val(char c) 
{ 
	if (c >= '0' && c <= '9') 
		return (int)c - '0'; 
	else
		return (int)c - 'A' + 10; 
} 


int toDeci(char *str) 
{      
      int base = 17 ;
	int len = strlen(str); 
	int power = 1; 
	int num = 0; 
	int i; 


	for (i = len - 1; i >= 0; i--) 
	{ 
	  num += val(str[i]) * power; 
	  power = power * base; 
	} 

	return num; 
} 

int main() 
{ 
	char str[50]; 
	scanf("%s",str);
        printf("%d",toDeci(str)); 
	return 0; 
}


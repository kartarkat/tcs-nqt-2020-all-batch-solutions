/*
SLOT: 2
Write a program to find the difference between the sum of the digits in the even places and sum of the digits in the odd places
Problem description 
int the number 5179
even place terms are : (5+7) = 12
odd  place terms are : (1+9) = 10
result :  12 - 10 = 2
Example-1
Input: 5179
Expected Output: 2
Example-2
Input: 718
Expected Output: 14
PROGRAM IN C :
*/

#include <stdio.h>



int main() 
{ 
	int number; 
	scanf("%d",&number);
	int even = 0 , odd = 0 ;
	int checker = 1 , result = 0;
	
	while(number != 0) {
	    
    	if (checker % 2 == 0) 
            even += number % 10;   
        else
            odd += number % 10;   
        number /= 10; 
        checker++;
	}
	
	result = even - odd;
	if( result > 0)
	printf("%d",result);
	else
	printf("%d", -1 * result);

	return 0; 
}
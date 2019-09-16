/*
 * Ivan Khaffaji
 * CSC/CTC-251
 * 9/16/2019
 * Lab #6
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void printOutput(int firstArray[], int secondArray[]);
void swapArray(int firstArray[], int secondArray[]);

int main(void)
{
	int firstArray[5] = {0,2,4,6,8};
	int secondArray[5] = {1,3,5,7,9};
	
	printf("Before swap:\n");
	printOutput(firstArray,secondArray);
	printf("\n");
	swapArray(firstArray,secondArray);

	printf("After swap:\n");
	printOutput(firstArray,secondArray);

	return EXIT_SUCCESS;	
}	

void printOutput(int firstArray[], int secondArray[])
{
	int i=0;

	for(i=0; i<5; i++)
	{
		printf("firstArray[%d]=%d, secondArray[%d]=%d\n",i,firstArray[i],i,secondArray[i]); 
	}
}

void swapArray(int firstArray[], int secondArray[])
{
	int i=0;
	int temp=0;

	for(i=0; i<5; i++)
	{
		temp = firstArray[i];
		firstArray[i] = secondArray[i];
		secondArray[i] = temp;	
	}
}

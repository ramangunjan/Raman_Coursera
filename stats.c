/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <programming assignment that prints statistics to the command line using a variety of c-programming operators and features >
 *
 * <Add Extended Description Here>
 *
 * @author <Gunjan Raman>
 * @date <21.02.2021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};



  /* Other Variable Declarations Go Here */

 unsigned char median_val, mean_val, max_val, min_val;

  /* Statistics and Printing Functions Go Here */

/*function to display an array of given size*/
	print_array(test, SIZE);

/*Function to sort an array from largest to smallest*/
	sort_array(test, SIZE);

/*Function to find median of an array of given size*/
	median_val = find_median(test, SIZE);
/*Function to find median of an array of given size*/
	mean_val   = find_mean(test, SIZE);

/*Function to display Maximum number in an array*/
	max_val = find_maximum(test);
/*Function to display Minimum number in an array*/
	min_val = find_minimum(test,SIZE);

/*Statistics of an array of given size*/
	print_statistics(median_val, mean_val, max_val, min_val);

	
}

/* Add other Implementation File Code Here */

void print_array(unsigned char* Arr, unsigned char n){
	unsigned char i;
        printf("\n\nDisplay an array of given size\n");
	for(i = 0; i < n; i++){
		printf("%u\t",*(Arr+i));
	}
}

void print_statistics(unsigned char median_val, unsigned char mean_val, unsigned char max, unsigned char min){

	printf("\nMedian value of an array of given size = %u\n", median_val);
	printf("\nMean value of an array of given size = %u\n", mean_val);
	printf("\nMinimum value of an array of given size = %u\n", min);
	printf("\nMaxmimum value of an array of given size = %u\n", max);
}

unsigned char find_median(unsigned char* Arr, unsigned char n){
	/*median is a middle number of a aorted array. So we use the results of sorted array*/
	/*check for even case*/		
	if(n%2 != 0)
	{
		return Arr[n/2];
	}

	else
	{
		return (Arr[(n-1)/2]+Arr[n/2])/2;
	}
}

unsigned char find_mean(unsigned char* Arr, unsigned char n){
	unsigned char i, sum = 0;
	for(i = 0; i<n; i++)
	{
         sum += Arr[i];
	}

	return sum/n;
}

unsigned char find_maximum(unsigned char* Arr){

	/*Here we use the max value from sorted array which is referenced directly to an address*/
	return Arr[0];
	
}

unsigned char find_minimum(unsigned char* Arr, unsigned char n){
	
	/*Here we use the max value from sorted array which is referenced directly to an address*/
	return Arr[n-1];
}


/*Arranging an array from largest to smallest*/
void sort_array(unsigned char* Arr, unsigned char n){
	unsigned char i,j, temp;

	for(i=0; i<n; i++)
	  {
	    for(j=i; j<n; j++)
		{
		  if(Arr[i]<Arr[j])
		    {
		      temp   = Arr[j];
		      Arr[j] = Arr[i];
		      Arr[i] = temp;
 		    }
		}
	  }
       printf("\n\nSorted array from largetst to smallest\n");

	for(i = 0; i < n; i++){
		printf("%u\t",*(Arr+i));
	}
}
